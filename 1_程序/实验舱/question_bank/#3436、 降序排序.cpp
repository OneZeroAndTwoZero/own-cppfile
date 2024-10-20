#include<bits/stdc++.h>
using namespace std;

int t;
vector<int> a;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	for (int i = 0; i < 4; i ++){
		scanf("%d", &t);
		a.push_back(t);
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < 4; i ++){
		printf("%d%c", a[i], " \n"[i == 3]);
	}

	return 0;
}
