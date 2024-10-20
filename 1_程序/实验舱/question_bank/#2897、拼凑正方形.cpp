#include<bits/stdc++.h>
using namespace std;

long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&n);
    printf("The largest square has side length %lld.\n",(long long)sqrt(n));

	return 0;
}