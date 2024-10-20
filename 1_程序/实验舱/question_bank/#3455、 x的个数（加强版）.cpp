#include<bits/stdc++.h>
using namespace std;

long long n;
int x, ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %d", &n, &x);
    if (n == 0 && x == 0){
        printf("1\n");
        return 0;
    }
    while (n){
        ans += ((n % 10) == x);
        n /= 10;
    }
    printf("%d\n", ans);

    return 0;
}