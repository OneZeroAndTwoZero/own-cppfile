#include<bits/stdc++.h>
using namespace std;

int N, t, minn = 1000000000, maxn = -1000000000;
set<int> st;
unordered_map<int, int> f;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i ++){
		scanf("%d", &t);
		f[t] = i;
		if (i == 1){
			maxn = minn = t;
			st.insert(t);
			continue;
		}
		if (t <= minn || t >= maxn){
			st.insert(t);
			if (t <= minn){
				printf("%d %d\n", abs(minn - t), f[minn]);
				minn = t;
			}else{
				printf("%d %d\n", abs(maxn - t), f[maxn]);
				maxn = t;
			}
			continue;
		}
		set<int> :: iterator nxt = st.lower_bound(t);
		set<int> :: iterator pre = nxt;
		pre --;
		if ((abs(*nxt - t) < abs(*pre - t)) || 
		((abs(*nxt - t) == abs(*pre - t)) && (*nxt < *pre))){
			swap(nxt, pre);
		}
		printf("%d %d\n", abs(*pre - t), f[*pre]);
		st.insert(t);
	}

	return 0;
}
