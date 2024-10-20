#include<bits/stdc++.h>
using namespace std;

long long n,m,a,b,ans = 0;
long long num1,num2;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%lld %lld %lld %lld",&n,&m,&a,&b);
    num1 = n / m;
    if(num1 <= 0) ans = abs((num1 + 1) * m - n) * a;
    else{
        num2 = num1 + 1;
        ans = min(abs(num1 * m - n) * b,abs(num2 * m - n) * a);
    }
    printf("%lld\n",ans);

	return 0;
}