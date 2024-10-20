#include<bits/stdc++.h>
using namespace std;

char ch;
int cnt = 0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif
	
	ch = getchar();
	while (ch != EOF){
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			cnt ++;
		ch = getchar();
	}
	printf("%d\n", cnt);

	return 0;
}
