#include<bits/stdc++.h>
using namespace std;

int n,m,x,y;
int a[100005];
int st[100005][25];

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int getans(int l,int r){
	return gcd(st[l][__lg(r - l + 1)]
	,st[r - (1 << __lg(r - l + 1)) + 1][__lg(r - l + 1)]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
		st[i][0] = a[i];
	}
	for(int j = 1;j <= __lg(n) + 1;j ++){
		for(int i = 1;i + (1 << j) - 1 <= n;i ++){
			st[i][j] = gcd(st[i][j - 1]
			,st[i + (1 << (j - 1))][j - 1]);
			// cout << i << " " << j << "  " << st[i][j] << "\n";
		}
	}
	while(m --){
		scanf("%d %d",&x,&y);
		printf("%d\n",getans(x,y));
	}

	return 0;
}