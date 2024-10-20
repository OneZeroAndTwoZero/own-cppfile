#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;
int m,e,f;

int main(){
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m = (c - a) * 60 + (d - b);
	e = m / 60;
	f = m % 60;
	printf("%d %d\n",e,f);

	return 0;
}

