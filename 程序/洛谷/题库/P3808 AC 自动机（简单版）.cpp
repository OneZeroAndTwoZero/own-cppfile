#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,pos = 0;
string s,e;
int t[5 * __len(5)][27];
int fail[5 * __len(5)],cnt[5 * __len(5)];

void insert(string &s){
    int p = 0;
    for(int i = 0;i < s.size();i ++){
        int val = s[i] - 'a';
        if(!t[p][val]) t[p][val] = ++pos;
        p = t[p][val];
    }
    cnt[p] ++;
}

void build(){
    queue<int> q;
    for(int i = 0;i < 26;i ++){
        if(t[0][i]) q.push(t[0][i]);
    }
    while(q.size()){
        int x = q.front();
        q.pop();
        for(int i = 0;i < 26;i ++){
            if(t[x][i]){
                fail[t[x][i]] = t[fail[x]][i];
                q.push(t[x][i]);
            }else{
                t[x][i] = t[fail[x]][i];
            }
        }
    }
}

int query(string &s){
    int p = 0,res = 0;
    for(int i = 0;i < s.size();i ++){
        p = t[p][s[i] - 'a'];
        for(int j = p;j != 0 && cnt[j] != -1;j = fail[j]){
            res += cnt[j];
            cnt[j] = -1;
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

    cin >> n;
    memset(t,0,sizeof(t));
    memset(cnt,0,sizeof(cnt));
    memset(fail,0,sizeof(fail));
    pos = 0;
    for(int i = 0;i < n;i ++){
        cin >> e;
        insert(e);
    }
    cin >> s;
    build();
    cout << query(s) << "\n";

    return 0;
}