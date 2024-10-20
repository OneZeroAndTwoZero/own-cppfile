#include<bits/stdc++.h>
using namespace std;

int n,k,idx,maxpos,minpos;
double maxn = -0x3f3f3f3f,minn = 0x3f3f3f3f;
double p,ans[10005];

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
        scanf("%d",&k);
        while(k --){
            scanf("%d %lf",&idx,&p);
            p /= 100.0;
            ans[idx] += p,ans[i] -= p;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(ans[i] > maxn){
            maxn = ans[i],maxpos = i;
        }
        if(ans[i] < minn){
            minn = ans[i],minpos = i;
        }
    }
    printf("%d %d\n",maxpos,minpos);
    for(int i = 1;i <= n;i ++){
        printf("%d %.2lf\n",i,ans[i]);
    }

    return 0;
}