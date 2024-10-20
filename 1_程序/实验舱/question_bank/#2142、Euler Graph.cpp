#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0,pos = 0;
int u,v;
int d[105];
vector<int> a[105];
bool vis[105];

void erg(int u){
    pos ++;
    vis[u] = 1;
    for(auto && i : a[u]){
        if(vis[i]) continue;
        erg(i);
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

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&u,&v);
        d[u] ++,d[v] ++;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",d[i]," \n"[i == n]);
        if(d[i] & 1) cnt ++;
    }
    erg(1);
    if(!cnt && pos == n) printf("Eulerian\n");
    else if(cnt == 2 && pos == n) printf("Semi-Eulerian\n");
    else printf("Non-Eulerian\n");

    return 0;
}