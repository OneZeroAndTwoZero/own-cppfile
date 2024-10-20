#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
long long n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d", &T);
	while (T --){
		scanf("%lld", &n);
		if (n >= 2 && n <= 7) printf("NO\n");
		else printf("YES\n");
	}

    return 0;
}
