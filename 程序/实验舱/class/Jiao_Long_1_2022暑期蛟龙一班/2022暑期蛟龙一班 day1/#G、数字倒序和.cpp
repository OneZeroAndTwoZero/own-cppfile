#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,other,sum;

int main(){
	scanf("%d",&a);
	b = a % 10,c = a / 10 % 10,d = a / 100 % 10;
	other = 100 * b + 10 * c + d;
	sum = a + other;
	printf("%d\n",sum);
	
	return 0;
}
