#include<bits/stdc++.h>
#define lowbit(x) ((x) & (-x))
using namespace std;

int M, sum;
int op, x, y;
int C[1000006], cnt[1000006];

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
	int res = 0, sum = 0;
	for (int i = 19; i >= 0; i --){
		if (res + (1 << i) <= 1000000 && sum + C[res + (1 << i)] < rnk){
			sum += C[res + (1 << i)];
			res += (1 << i);
		}
	}
	return res + 1;
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
			cnt[x] ++, sum ++;
		}else if (op == 1){
			if (cnt[x]){
				cnt[x] --, sum --;
				update(x, -1);
			}else{
				printf("No Elment!\n");
			}
		}else{
			scanf("%d", &y);
			int cur = query(x) + y;
			if (sum >= cur) printf("%d\n", operate(cur));
			else printf("Not Find!\n");
		}
	}

	return 0;
}
