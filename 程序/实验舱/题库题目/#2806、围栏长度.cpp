#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;
int l,r,ans;

int main(){
	scanf("%d %d %d %d",&a,&b,&c,&d);
	b ++,d ++;
	ans += (d - c) + (b - a);
	l = max(a,c),r = min(b,d);
	ans -= max(1,r - l);
	printf("%d\n",-- ans);

	return 0;
}

