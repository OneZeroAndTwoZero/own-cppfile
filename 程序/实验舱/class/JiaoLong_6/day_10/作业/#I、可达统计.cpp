#include<bits/stdc++.h>
using namespace std;

int n,m,u,v;
int d[30005];
bitset<30005> s[30005];
vector<int> a[30005];
vector<int> topo;

void toposort(){
    queue<int> q;
    for(int i = 1;i <= n;i ++){
        if(!d[i]) q.push(i);
    }
    while(q.size()){
        int t = q.front();
        q.pop();
        topo.push_back(t);
        for(auto && i : a[t]){
            d[i] --;
            if(!d[i]) q.push(i);
        }
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
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        d[v] ++;
    }
    toposort();
    s[topo[n - 1]][topo[n - 1]] = 1;
    for(int i = n - 2;i >= 0;i --){
        for(auto && t : a[topo[i]]){
            s[topo[i]] |= s[t];
        }
        s[topo[i]][topo[i]] = 1;
    }
    for(int i = 1;i <= n;i ++){
        printf("%d\n",s[i].count());
    }

    return 0;
}