#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

char c;
int ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	while(c = getchar()){
		if (c == '\n' || c == EOF) break;
		if (c == ' ') ans ++;
	}
	printf("%d\n", ans);

    return 0;
}
