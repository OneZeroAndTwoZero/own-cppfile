#include<bits/stdc++.h>
using namespace std;

int N, cnt = 0;
int val[300005];
set<int, greater<int> > st;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	scanf("%d", &N);
	for (int i = 0; i < N; i ++){
		scanf("%d", &val[i]);
		st.insert(val[i]);
	}
	st.erase(st.begin());
	st.erase(st.begin());
	printf("%d ", *st.begin());
	for (int i = 0; i < N; i ++){
		cnt += (val[i] == *st.begin());
	}
	printf("%d\n", cnt);
	
	return 0;
}
