#include<bits/stdc++.h>
using namespace std;

int d,i;
int ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&d,&i);
    ans = pow(2,d - 1);
    while(i){
        if(i % 2 == 0) ans += pow(2,d - 2);
        if(i == 1) i --;
        d --,i = (i + 1) / 2;
    }
    printf("%d\n",ans);

	return 0;
}