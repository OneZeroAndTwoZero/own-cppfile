#include<bits/stdc++.h>
using namespace std;

int m,n,r,a,b;
double max_ = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&m,&n,&r,&a);
    a *= 1024,m *= 60;
    for(int i = 0;i < n;i ++){
        scanf("%d",&b);
        max_ = max(max_,(double)a / (r + b));
    }
    if(max_ > m) printf("xi wen le jian\n");
    else printf("%.2lf\n",max_);

	return 0;
}