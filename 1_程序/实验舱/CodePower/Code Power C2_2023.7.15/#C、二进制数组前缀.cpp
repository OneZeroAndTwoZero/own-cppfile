#include<bits/stdc++.h>
using namespace std;

int n,t,num;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        num = num * 2 + t;
        num %= 10;
        if(num % 5 == 0){
            printf("true\n");
        }else{
            printf("false\n");
        }
    }

	return 0;
}