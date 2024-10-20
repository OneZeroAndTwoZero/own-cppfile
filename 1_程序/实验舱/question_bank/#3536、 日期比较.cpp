#include<bits/stdc++.h>
using namespace std;

struct day{
	int y, m, d;
};

day d1, d2;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d %d", &d1.y, &d1.m, &d1.d);
	scanf("%d %d %d", &d2.y, &d2.m, &d2.d);
	if (d1.y < d2.y || (d1.y == d2.y && d1.m < d2.m) || (d1.y == d2.y && d1.m == d2.m && d1.d < d2.d)){
		printf("Early\n");
	}else if (d1.y == d2.y && d1.m == d2.m && d1.d == d2.d){
		printf("Same\n");
	}else{
		printf("Late\n");
	}

	return 0;
}
