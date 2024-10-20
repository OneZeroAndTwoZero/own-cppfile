#include<bits/stdc++.h>
using namespace std;

int a,b,k,sum;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&a,&b);
    for(int i = a;i <= b;i ++){
        printf("%5d",i);
        k ++,sum += i;
        if(k == 5){
            k = 0;
            printf("\n");
        }
    }
    if(k) printf("\n");
    printf("Sum = %d\n",sum);

	return 0;
}