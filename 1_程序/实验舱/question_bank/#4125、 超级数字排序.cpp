#include<bits/stdc++.h>
using namespace std;

struct node{
	int val, cnt, cntd;
	bool operator < (const node &a) const{
		if (cnt != a.cnt) return cnt > a.cnt;
		if ((val & 1) != (a.val & 1)) return (val & 1) > (a.val & 1);
		if (cntd != a.cntd) return cntd > a.cntd;
		return val < a.val;
	}
};

int N;
int cnt[100005];
int fir[100005], las[100005];
node a[100005];

int operate(int x){
	int res = 0;
	for (int i = 1; i <= x / i; i ++){
		if (x % i) continue;
		res += 2;
		res -= (i * i == x);
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &a[i].val);
		if (!fir[a[i].val]) fir[a[i].val] = i;
		las[a[i].val] = i;
		cnt[a[i].val] ++;
	}
	for (int i = 1; i <= N; i ++){
		a[i].cnt = cnt[a[i].val];
		a[i].cntd = operate(a[i].val);
	}
	sort(a + 1, a + N + 1);
	for (int i = 1; i <= N; i ++){
		if (a[i].val == a[i - 1].val) continue;
		printf("%d %d %d %d %d\n", a[i].val, fir[a[i].val], las[a[i].val], a[i].cnt, a[i].cntd);
	}
	
	return 0;
}
