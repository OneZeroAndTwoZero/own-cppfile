#include<bits/stdc++.h>
using namespace std;

int s,t,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d",&s,&t,&x);
    if(s < t){
        if(x >= s && x < t){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        if(x >= s || x < t){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

	return 0;
}