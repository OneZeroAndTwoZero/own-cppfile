#include<bits/stdc++.h>
using namespace std;

int n,m;
int d[100005] = {0};
int l,r,k,di;
int pos = 0;
int t[100005] = {0};
int t2[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&d[i]);
        d[i] = d[i] - d[i - 1];
        d[i] = d[i] - d[i - 1];
    }
    while(m --){
        scanf("%d %d %d %d",&l,&r,&k,&di);
        t[pos] = l,t2[pos ++] = k;
        d[l + 1] += di,d[r ++] -= di;
    }
    for(int i = 1;i <= n;i ++){
        d[i] += d[i - 1];
    }
    for(int i = 0;i < pos;i ++){
        d[t[i]] += t2[i];
    }
    for(int i = 1;i <= n;i ++){
        d[i] += d[i - 1];
        printf("%d ",d[i]);
    }

	return 0;
}