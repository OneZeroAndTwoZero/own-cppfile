#include<bits/stdc++.h>
using namespace std;

int t,n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        if(n & 1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

	return 0;
}