#include <bits/stdc++.h>
using namespace std;
int m,n,q,f[1<<22],g[1<<22];
char s[30];
int main () {
	scanf("%d%d%d",&m,&n,&q);
	for (int i=0;i<(1<<m);i++) {f[i]=g[i]=i;}
	for (int i=1;i<=n;i++) {
		scanf("%s",s);
		int t0=0,t1=0,tm=0;
		for (int j=0;j<m;j++) {t0+=((s[j]=='0')<<j),t1+=((s[j]=='1')<<j),tm+=((s[j]=='-')<<j);}
		f[t0]|=t1;
	}
	for (int i=1;i<(1<<m);i<<=1) {
		for (int j=0;j<(1<<m);j+=(i<<1)) {
			for (int k=0;k<i;k++) {f[j+k+i]|=f[j+k];}
		}
	}
	for (int i=(1<<m)-1;i>=0;i--) {g[i]=g[f[i]];}
	for (int i=1;i<=q;i++) {
		scanf("%s",s);
		int msk=(1<<m)-1,t1=0;
		for (int j=0;j<m;j++) {
			msk^=(1<<j),t1+=((s[j]=='1')<<j);
			if ((g[msk]|t1)==(1<<m)-1) {putchar('1');}
			else {putchar('0');msk^=(1<<j);}
		}
		putchar('\n');
	}
	return 0;
}
