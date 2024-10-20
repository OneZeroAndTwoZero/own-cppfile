#include<bits/stdc++.h>
using namespace std;

int n,t,ans_h = 0,ans_w = 0;
int deep[100005];
int cnt[100005];
int l[100005],r[100005];

void erg(int u,int d){
    if(u == 0) return;
    deep[u] = d,cnt[d] ++;
    ans_h = max(ans_h,d),ans_w = max(ans_w,cnt[d]);
    erg(l[u],d + 1);
    erg(r[u],d + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        scanf("%d %d",&l[t],&r[t]);
    }
    erg(1,1);
    printf("%d %d\n",ans_h,ans_w);

	return 0;
}