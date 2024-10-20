#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,t;
int maxn[__len(6)],cur[__len(6)];

int operate(int x){
    int res = 1;
    while(x){
        res *= (x % 10);
        x /= 10;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    for(int i = 1;i <= 1000000;i ++){
        maxn[i] = max(maxn[i - 1],operate(i));
        cout << i << " " << maxn[i] << "[][][]\n";
    }
    while(T --){
        scanf("%d",&t);
        printf("%d\n",maxn[t]);
    }

    return 0;
}