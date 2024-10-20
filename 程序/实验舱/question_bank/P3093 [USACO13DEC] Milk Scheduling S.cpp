#include<bits/stdc++.h>
using namespace std;

struct cow{
	int d, g;
	bool operator < (const cow &a) const{
		if (d != a.d) return d < a.d;
		return g > a.g;
	}
};

int N;
long long ans = 0;
cow val[100005];
multiset<int> st;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d %d", &val[i].g, &val[i].d);
	}
	sort(val, val + N);
	for (int i = 0; i < N; i ++){
		if (st.size() < val[i].d){
			st.insert(val[i].g);
			ans += val[i].g;
		}else if (val[i].g > *st.begin()){
			ans += val[i].g - (*st.begin());
			st.erase(st.begin());
			st.insert(val[i].g);
		}
	}
	printf("%lld\n", ans);

	return 0;
}
