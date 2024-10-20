#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;

int main(){
	scanf("%d %d",&a,&b);
	c = a / b;
	d = a - b * c;
	printf("%d %d\n",c,d);
	
	return 0;
}
