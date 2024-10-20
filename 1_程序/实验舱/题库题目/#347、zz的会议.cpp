#include<bits/stdc++.h>
using namespace std;

int t;
int s,v,l,r,ans;

int main(){
	scanf("%d",&t);
	while(t --){
		ans = 0;
		scanf("%d %d %d %d",&s,&v,&l,&r);
		ans = s / v;
		ans -= (r / v) - ((l - 1) / v);
		printf("%d\n",ans);
	}

	return 0;
}

