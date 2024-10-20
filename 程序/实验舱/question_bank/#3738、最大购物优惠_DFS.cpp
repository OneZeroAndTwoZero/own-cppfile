#include<bits/stdc++.h>
using namespace std;

int W,V,n,ans,anspos;
int t[105],order[105];
int w[105],v[105],c[105];

void dfs(int k,int pos,int noww,int nowv,int nowc){
    if(k == n + 1){
        if(noww <= W && nowv <= V){
            if(nowc <= ans) return;
            ans = nowc;
            for(int i = 0;i < pos;i ++){
                order[i] = t[i];
            }
            anspos = pos;
        }
        return;
    }
    if(noww > W || nowv > V) return;
    t[pos] = k;
    dfs(k + 1,pos + 1,noww + w[k],nowv + v[k],nowc + c[k]);
    dfs(k + 1,pos,noww,nowv,nowc);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&W,&V,&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d %d",&w[i],&v[i],&c[i]);
    }
    dfs(1,0,0,0,0);
    printf("%d\n",ans);
    for(int i = 0;i < anspos;i ++){
        printf("%d ",order[i]);
    }

    return 0;
}