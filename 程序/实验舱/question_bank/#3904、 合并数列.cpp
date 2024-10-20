#include<bits/stdc++.h>
using namespace std;

int N, M, ans = 0;
long long t, cura, curb;
queue<long long> qa, qb;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i ++){
		scanf("%lld", &t);
		qa.push(t);
	}
	for (int i = 0; i < M; i ++){
		scanf("%lld", &t);
		qb.push(t);
	}
	cura = qa.front();
	curb = qb.front();
	qa.pop(), qb.pop();
	while (qa.size() || qb.size()){
		if (cura < curb){
			cura += qa.front();
			qa.pop();
		}else if (cura > curb){
			curb += qb.front();
			qb.pop();
		}
		if (cura == curb){
			ans ++;
			if (!qa.size()) break;
			cura = qa.front();
			curb = qb.front();
			qa.pop(), qb.pop();
		}
	}
	printf("%d", N + M - ans * 2);

	return 0;
}
