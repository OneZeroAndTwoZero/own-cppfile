#include <bits/stdc++.h>
using namespace std;
const int N=500010;
int n,m,x,col[N],vis[N];
int gcd (int a,int b) {return (b==0?a:gcd(b,a%b));}
int main () {
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++) {
		scanf("%d",&x);
		x=gcd(x,n);
		if (vis[x]) {printf("0%c"," \n"[i==m]);continue;}
		vis[x]=1;
		int cnt=0;
		for (int i=0;i<n;i+=x) {
			if (!col[i]) {cnt++,col[i]=1;}
		}
		printf("%d%c",cnt," \n"[i==m]);
	}
	return 0;
}
