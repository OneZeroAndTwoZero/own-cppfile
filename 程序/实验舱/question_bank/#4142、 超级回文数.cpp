#include<bits/stdc++.h>
using namespace std;

int T;
long long X;

bool operate(long long x){
	string cur = "";
	while (x){
		cur.push_back((x % 10) + '0');
		x /= 10;
	}
	int l = 0, r = cur.size() - 1;
	while (l < r){
		if (cur[l] != cur[r]) return 0;
		l ++, r --;
	}
	return 1;
}

long long getsum(long long x){
	long long res = 0;
	while (x){
		res += x % 10;
		x /= 10;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &T);
	while (T --){
		scanf("%lld", &X);
		if (operate(X) && operate(getsum(X))) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
