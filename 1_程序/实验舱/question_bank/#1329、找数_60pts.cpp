#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		for(int j = i;j <= n;j ++){
			int cur = gcd(i,j);
			if(((i * j) / cur) - cur <= 800) ans ++;
		}
	}
	printf("%d\n",ans);

    return 0;
}