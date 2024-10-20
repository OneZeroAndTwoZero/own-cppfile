#include<bits/stdc++.h>
using namespace std;

int T;
long long s, a;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &T);
	while (T --){
		scanf("%lld %lld", &a, &s);
		s -= 2 * a;
		if (s < 0 || (s & a)){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}

	return 0;
}
