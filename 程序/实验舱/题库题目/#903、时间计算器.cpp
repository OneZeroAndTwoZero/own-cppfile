#include<bits/stdc++.h>
using namespace std;

int h,m,s,a;

int main(){
	scanf("%d %d %d",&h,&m,&s);
	printf("%02d:%02d:%02d\n",h,m,s);
	scanf("%d",&a);
	s += a;
	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
	h = (h - 1) % 12 + 1;
	printf("%02d:%02d:%02d\n",h,m,s);

	return 0;
}

