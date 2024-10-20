#include<bits/stdc++.h>
using namespace std;

int a,b,c,score;

int main(){
	scanf("%d %d %d",&a,&b,&c);
	score = 0.2 * a + 0.3 * b + 0.5 * c;
	printf("%d\n",score);
	
	return 0;
}
