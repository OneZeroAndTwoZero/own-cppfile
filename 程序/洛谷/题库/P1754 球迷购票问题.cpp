#include<bits/stdc++.h>
using namespace std;

int a;
long long cat[1005] = {0};

long long suan(int n){
    if(cat[n] != 0) return cat[n];
    long long res = 0;
    for(int k = 1;k <= n;k ++){
        res += suan(k - 1) * suan(n - k);
    }
    cat[n] = res;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cat[0] = cat[1] = 1;
    scanf("%d",&a);
    printf("%lld\n",suan(a));

	return 0;
}
