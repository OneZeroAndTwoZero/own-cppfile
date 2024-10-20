#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int l,r;
int d[1000006] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&l,&r);
        d[l] ++,d[r + 1] --;
    }
    for(int i = 1;i <= n;i ++){
        d[i] += d[i - 1];
        if(!d[i]) ans ++;
    }
    printf("%d\n",ans);

	return 0;
}
