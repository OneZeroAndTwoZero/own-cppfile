#include<bits/stdc++.h>
using namespace std;

int x,n;
int ans = 0;

int main(){
	scanf("%d %d",&x,&n);
	ans += (n / 7) * 250 * 5;
	n %= 7;
	x --;
	for(int i = x;i - x < n;i ++){
		if((i % 7) < 5) ans += 250;
	}
	printf("%d\n",ans);

	return 0;
}

