#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
char a[25][25];
unordered_map<string,int> cnt[45];
set<string> S;

void dfs1(int x,int y,string s){
    s.push_back(a[x][y]);
    if(x + y == n - 1){
        cnt[x - y + 21][s] = 1;
        return;
    }
    dfs1(x + 1,y,s);
    dfs1(x,y + 1,s);
}

void dfs2(int x,int y,string s){
    s.push_back(a[x][y]);
    if(x + y == n - 1){
        if(cnt[x - y + 21][s] == 0) return;
        S.insert(s);
        return;
    }
    dfs2(x - 1,y,s);
    dfs2(x,y - 1,s);
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
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    dfs1(0,0,"");
    dfs2(n - 1,n - 1,"");
    cout << S.size() << "\n";

    return 0;
}