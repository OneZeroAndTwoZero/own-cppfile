#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int m,n,cnt = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&m);
    while(m --){
        scanf("%d",&n);
        cnt = 0;
        if(n == 0){
            printf("0\n");
            continue;
        }
        while(n){
            cnt += 1 + (n & 1);
            n /= 2;
        }
        printf("%d\n",cnt - 2);
    }

    return 0;
}