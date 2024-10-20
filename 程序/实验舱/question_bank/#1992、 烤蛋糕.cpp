#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T;
long long t1,t2;
long long n,s,k,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %lld %lld %lld",&n,&s,&k,&x);
        t1 = s * (((n - 1) / k) + 1);
        n -= ((x / s) * k),k *= 2;
        // cout << n << "[][]\n";
        t2 = x + s * (((n - 1) / k) + 1);
        // cout << t1 << " " << t2 << "\n";
        if(t2 < t1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}