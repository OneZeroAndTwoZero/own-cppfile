#include<bits/stdc++.h>
using namespace std;

int a, b, c, cnt = 0;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../data.in", "r", stdin);
	freopen("../data.out", "w", stdout);
#endif

	scanf("%d %d %d", &a, &b, &c);
	if (a + b == c){
		cnt ++;
		printf("+ ");
	}
	if (a - b == c){
		cnt ++;
		printf("- ");
	}
	if (a * b == c){
		cnt ++;
		printf("* ");
	}
	if (b != 0 && a == c * b){
		cnt ++;
		printf("/ ");
	}
	if (b != 0 && a % b == c){
		cnt ++;
		printf("%c ", '%');
	}
	if (!cnt) printf("None");
	printf("\n");

	return 0;
}
