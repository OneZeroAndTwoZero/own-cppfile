#include<bits/stdc++.h>
using namespace std;

int t,a[3];

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        sort(a,a + 3);
        if(a[2] - a[1] == a[1] - a[0]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

	return 0;
}