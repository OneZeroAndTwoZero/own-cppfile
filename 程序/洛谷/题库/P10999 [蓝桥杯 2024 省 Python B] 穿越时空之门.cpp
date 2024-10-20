#include<bits/stdc++.h>
using namespace std;

int N = 2024, ans = 0;

int get_sum(int x, int k){
	int res = 0;
	while (x){
		res += (x % k);
		x /= k;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
	
	for (int i = 1; i <= N; i ++){
		ans += (get_sum(i, 2) == get_sum(i, 4));
	}
	printf("%d\n", ans);

    return 0;
}
