#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
#define START '0'
using namespace std;

int t[__len(5)][131];
int cnt[__len(5)];
int pos = 0;
int T,n;
string s[__len(5)];

void insert(string &s){
    int p = 0;
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - START;
        if(!t[p][val]) t[p][val] = ++pos;
        p = t[p][val];
    }
    cnt[p] ++;
}

int findpre(string &s){
    int p = 0,res = 0;
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - START;
        if(!t[p][val]) return res;
        p = t[p][val];
        res += cnt[p];
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

    cin >> T;
    while(T --){
        memset(t,0,sizeof(t));
        memset(cnt,0,sizeof(cnt));
        pos = 0;
        cin >> n;
        for(int i = 0;i < n;i ++){
            cin >> s[i];
            insert(s[i]);
        }
        bool ans = 0;
        for(int i = 0;i < n;i ++){
            if(findpre(s[i]) > 1){
                ans = 1;
                break;
            }
        }
        if(ans) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}