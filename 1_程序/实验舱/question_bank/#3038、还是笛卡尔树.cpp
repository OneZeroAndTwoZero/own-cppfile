#include <bits/stdc++.h>
using namespace std;

int n,st;
int fa[100006];
int l[100006],r[100006];
int a[100006];
stack<int> s;

void bfs(int st){
    queue<int> q;
    q.push(st);
    while(q.size()){
        int t = q.front();
        q.pop();
        if(t == 0) continue;
        printf("%d ",a[t]);
        q.push(l[t]);
        q.push(r[t]);
    }
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
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        int idx = -1;
        while(s.size() && a[s.top()] > a[i]){
            idx = s.top();
            s.pop();
        }
        if(idx != -1){
            fa[idx] = i;
        }
        if(s.size()){
            fa[i] = s.top();
        }
        s.push(i);
    }
    for(int i = 1;i <= n;i ++){
        if(fa[i] == 0) st = i;
        if(fa[i] < i) r[fa[i]] = i;
        else l[fa[i]] = i;
    }
    bfs(st);

    return 0;
}