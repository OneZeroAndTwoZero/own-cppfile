#include<bits/stdc++.h>
using namespace std;

int t;
int n,k,tem,sum,cur;

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
        scanf("%d %d",&n,&k);
        sum = 1;
        while(n --){
            scanf("%d",&tem);
            sum *= tem;
        }
        if(sum == 0 || 2023 % sum != 0){
            printf("NO\n");
        }else{
            printf("YES\n");
            cur = 2023 / sum;
            for(int i = 1;i < k;i ++){
                printf("1 ");
            }
            printf("%d\n",cur);
        }
    }

    return 0;
}
