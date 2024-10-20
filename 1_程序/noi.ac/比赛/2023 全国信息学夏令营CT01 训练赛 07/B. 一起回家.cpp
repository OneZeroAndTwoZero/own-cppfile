#include<bits/stdc++.h>
using namespace std;

int t;
int xa,ya,xb,yb,xc,yc;
int ans = 0;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif


    scanf("%d",&t);
    while(t --){
        scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);
        ans = 0;
        if((xb > xa && xc > xa) || (xb < xa && xc < xa))
            ans += min(abs(xb - xa),abs(xc - xa));
        if((yb > ya && yc > ya) || (yb < ya && yc < ya))
            ans += min(abs(yb - ya),abs(yc - ya));
        printf("%d\n",ans + 1);
    }

	return 0;
}