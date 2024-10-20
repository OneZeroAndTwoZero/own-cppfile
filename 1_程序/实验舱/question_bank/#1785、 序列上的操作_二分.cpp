#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int M;
int op, x, y;
int C[1000006];

void update(int x, int val){
	for (int i = x; i <= 1000000; i += lowbit(i)){
		C[i] += val;
	}
}

int query(int x){
	int res = 0;
	for (int i = x; i; i -= lowbit(i)){
		res += C[i];
	}
	return res;
}

int operate(int rnk){
	int l = 0, r = 1000000, res = -1;
	while (l <= r){
		int mid = (l + r) >> 1;
		if (query(mid) >= rnk){
			res = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &M);
	while (M --){
		scanf("%d %d", &op, &x);
		if (op == 0){
			update(x, 1);
		}else if (op == 1){
			if (query(x) - query(x - 1)){
				update(x, -1);
			}else{
				printf("No Elment!\n");
			}
		}else{
			scanf("%d", &y);
			int cur = query(x) + y;
			int ans = operate(cur);
			if (~ans) printf("%d\n", ans);
			else printf("Not Find!\n");
		}
	}

	return 0;
}
