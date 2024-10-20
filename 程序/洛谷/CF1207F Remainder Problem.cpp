#include<bits/stdc++.h>
using namespace std;

int q;
int op,x,y;
long long sum[1005][1005];
long long a[500005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&q);
    while(q --){
        scanf("%d %d %d",&op,&x,&y);
        if(op == 1){
            a[x] += y;
            for(int i = 1;i <= 800;i ++){
                sum[i][x % i] += y;
            }
        }else{
            if(x <= 800){
                printf("%lld\n",sum[x][y]);
            }else{
                long long res = 0;
                for(int i = y;i <= 500000;i += x){
                    res += a[i];
                }
                printf("%lld\n",res);
            }
        }
    }

    return 0;
}