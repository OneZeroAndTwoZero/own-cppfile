#include<bits/stdc++.h>
using namespace std;

int cnt1, cnt2;
long long a[5];

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	cnt1 = cnt2 = 0;
	for (int i = 0; i < 4; i ++){
		scanf("%lld", &a[i]);
		if (a[i] < 0) cnt1 ++;
		else if (a[i] > 0) cnt2 ++;
	}
	if (cnt1 && cnt2) printf("Yes\n");
	else printf("No\n");

	return 0;
}
