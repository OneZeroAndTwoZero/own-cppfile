#include<bits/stdc++.h>
using namespace std;

int n;
long long cat[104] = {0};

long long suan(int a){
    if(a == 0 || a == 1) return 1;
    if(cat[a] != 0) return cat[a];
    long long res = 0;
    for(int i = 1;i <= a;i ++)
        res += suan(i - 1) * suan(a - i);
    cat[a] = res;
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cat[1] = cat[0] = 1LL;
    scanf("%d",&n);
    printf("%lld\n",suan(n));

	return 0;
}