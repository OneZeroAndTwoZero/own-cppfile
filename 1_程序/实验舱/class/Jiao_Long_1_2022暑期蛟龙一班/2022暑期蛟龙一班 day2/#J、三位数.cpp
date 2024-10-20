#include<bits/stdc++.h>
using namespace std;

int a,b,c,h;
bool flag;

int main(){
	scanf("%d %d %d",&a,&b,&c);
	h = a + b + c;
	flag = h >= 1000 || h < 100;
	printf("%d\n%d\n",h,flag);
	
	return 0;
}
