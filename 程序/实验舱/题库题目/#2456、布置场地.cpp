#include<bits/stdc++.h>
using namespace std;

int x,y,a,b,c,ans;

int main(){
	scanf("%d %d %d %d %d",&x,&y,&a,&b,&c);
	ans = min(min(x,y) * (a + b),min(x,y) * c * 2);
	if(x > y) ans += (x - y) * a;
	else ans += (y - x) * b;
	printf("%d\n",ans); 

	return 0;
}

