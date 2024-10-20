#include<bits/stdc++.h>
using namespace std;

int s,t,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&s,&t);
    while(t > s){
        if((t >> 1) < s){
            ans += (t - s);
            t = s;
        }else{
            ans += 1 + (t & 1);
            t >>= 1;
        }
    }
    printf("%d\n",ans);

	return 0;
}