#include<bits/stdc++.h>
using namespace std;

int n,m;
int d[30005];
int ans[30005] = {0};
vector<int> a[30005];
int u,v;

void topsort(){
    queue<int> q;
    for(int i = 1;i <= n;i ++){
        if(!d[i]){
            q.push(i);
            ans[i] = 1;
            
        }
    }
    while(q.size()){
        int s = q.front();
        q.pop();
        for(auto && i : a[s]){
            ans[i] += ans[s];
            d[i] --;
            if(!d[i]){
                q.push(i);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&u,&v);
        d[u] ++;
        a[v].push_back(u);
    }
    topsort();
    for(int i = 1;i <= n;i ++){
        printf("%d\n",ans[i]);
    }

	return 0;
}
