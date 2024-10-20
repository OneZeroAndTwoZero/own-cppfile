#include<bits/stdc++.h>
using namespace std;

int n,st;
int l[105],r[105];
bool vis[105];
string s;

void dfs(int u){
    if(u == -1) return;
    dfs(l[u]);
    cout << u << " ";
    dfs(r[u]);
}

void bfs(int st){
    queue<int> q;
    q.push(st);
    while(q.size()){
        int t = q.front();
        q.pop();
        if(t == -1) continue;
        cout << t << " ";
        q.push(l[t]);
        q.push(r[t]);
    }
}

int turn(string s){
    int res = 0;
    for(int i = 0;i < s.size();i ++){
        res = (res * 10) + (s[i] - '0');
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
    for(int i = 0;i < n;i ++){
        cin >> s;
        if(s != "-"){
            l[i] = turn(s);
            vis[turn(s)] = 1;
        }else{
            l[i] = -1;
        }
        cin >> s;
        if(s != "-"){
            r[i] = turn(s);
            vis[turn(s)] = 1;
        }else{
            r[i] = -1;
        }
        swap(l[i],r[i]);
    }
    for(int i = 0;i < n;i ++){
        if(!vis[i]) st = i;
    }
    bfs(st);
    cout << "\n";
    dfs(st);
    cout << "\n";

    return 0;
}