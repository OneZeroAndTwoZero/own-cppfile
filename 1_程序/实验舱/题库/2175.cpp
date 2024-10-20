#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,m,s;
	scanf("%d:%d:%d",&h,&m,&s);
	int n;
	cin >> n;
	s += n % 60;
	n /= 60;
	m += n % 60;
	n /= 24;
	h += n;
	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
	h %= 24;
	printf("%02d:%02d:%02d\n",h,m,s);

	return 0;
}

