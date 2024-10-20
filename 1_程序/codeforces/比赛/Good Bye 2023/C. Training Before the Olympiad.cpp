#include<bits/stdc++.h>
using namespace std;

int t,n,num;
long long tem,sum,ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        scanf("%d",&n);
        sum = 0,num = 0;
        for(int i = 1;i <= n;i ++){
            scanf("%lld",&tem);
            sum += tem;
            num += (tem & 1LL);
            if(i == 1){
                printf("%lld ",sum);
            }else if(i == 2){
                printf("%lld ",sum - (num & 1));
            }else{
                ans = sum;
                if(num == 3){
                    ans --;
                }else if(num > 3){
                    ans -= (num / 3);
                    if(i - num == 0 && num % 2 == 0) ans --; 
                }
                printf("%lld ",ans);
            }
        }
        printf("\n");
    }

    return 0;
}