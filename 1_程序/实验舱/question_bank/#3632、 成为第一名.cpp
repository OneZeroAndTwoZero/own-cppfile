#include<bits/stdc++.h>
using namespace std;

int N, K, t, cur;
vector<int> sc;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &t);
		if (i == K) cur = t;
		else sc.push_back(t);
	}
	sc.push_back(-114514);
	sort(sc.begin(), sc.end());
	printf("%d", max(0, sc[sc.size() - 1] - cur + 1));

	return 0;
}
