#include<bits/stdc++.h>
using namespace std;

long long rev(long long a){
    long long res = 0;
    while(a){
        res = (res << 3) + (res << 1) + (a % 10);
        a /= 10;
    }
    return res;
}

int n;
long long ans,t;
unordered_map<long long,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        long long tem = t - rev(t);
        ans += f[tem];
        ++ f[tem];
    }
    printf("%lld\n",ans);

	return 0;
}