#include<bits/stdc++.h>
using namespace std;

int a;
set<int> st;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif

	scanf("%d", &a);
	a *= 37;
	while (a){
		st.insert(a % 10);
		a /= 10;
	}
	if (st.size() <= 1) printf("Yes\n");
	else printf("No\n");

    return 0;
}
