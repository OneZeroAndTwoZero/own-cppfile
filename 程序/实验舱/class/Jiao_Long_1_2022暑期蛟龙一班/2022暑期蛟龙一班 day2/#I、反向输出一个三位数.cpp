#include<bits/stdc++.h>
using namespace std;

int num,g,s,b;

int main(){
	scanf("%d",&num);
	g = num % 10,s = num / 10 % 10,b = num / 100 % 10;
	printf("%d%d%d\n",g,s,b);
	
	return 0;
}
