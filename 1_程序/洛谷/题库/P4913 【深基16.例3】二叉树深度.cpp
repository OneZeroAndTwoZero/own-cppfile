#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int deep[100005];
int l[100005],r[100005];

void erg(int u,int d){
    if(u == 0) return;
    deep[u] = d;
    ans = max(ans,d);
    erg(l[u],d + 1);
    erg(r[u],d + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&l[i],&r[i]);
    }
    erg(1,1);
    printf("%d\n",ans);

	return 0;
}
