#include<bits/stdc++.h>
using namespace std;

int a,b,ans;

int main(){
	scanf("%d %d",&a,&b);
	ans = a * 50 - b * 10 + ((a > b) * 500);
	printf("%d\n",ans);

	return 0;
}

