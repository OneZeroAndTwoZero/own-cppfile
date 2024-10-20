#include<bits/stdc++.h>
using namespace std;

int a,b,c,sum;

int main(){
	scanf("%d",&a);
	b = a % 10;
	c = a / 10 % 10;
	sum = b + c;
	printf("%d\n",sum);
	
	return 0;
}
