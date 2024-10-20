#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
#define START '0'
using namespace std;

int t[3 * __len(6)][3];
int cnt[3 * __len(6)];
int a[__len(5)];
int n,pos = 0,ans = 0;

string turnstring(int x){
    string res = "";
    while(x){
        res.push_back((x % 2) + '0');
        x /= 2;
    }
    while(res.size() < 32) res.push_back('0');
    reverse(res.begin(),res.end());
    return res;
}

int turnint(string s){
    int res = 0;
    for(auto && i : s){
        res = (res << 1) + (i ^ '0');
    }
    return res;
}

void insert(string s){
    int p = 0;
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - START;
        if(!t[p][val]) t[p][val] = ++pos;
        p = t[p][val];
    }
    cnt[p] ++;
}

int findpre(string s){
    int p = 0,res = 0;
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - START;
        if(!t[p][val]) return res;
        p = t[p][val];
        res += cnt[p];
    }
    return res;
}

string findmaxxor(string s){
    string res = "";
    int p = 0;
    for(int i = 0;i < s.size();i ++){
        int val = 1 - (s[i] - START);
        if(t[p][val]){
            res.push_back(val + '0');
            p = t[p][val];
        }else{
            res.push_back((1 - val) + '0');
            p = t[p][1 - val];
        }
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        insert(turnstring(a[i]));
    }
    for(int i = 0;i < n;i ++){
        ans = max(ans,a[i] ^ turnint(findmaxxor(turnstring(a[i]))));
    }
    printf("%d\n",ans);

    return 0;
}