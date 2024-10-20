#include <bits/stdc++.h>
using namespace std;
const int N=4000010;
int t,n,a[N],s[N];
int read () {
	int res=0;
	char c=getchar();
	while (c<'0'||c>'9') {c=getchar();}
	while (c>='0'&&c<='9') {res=res*10+c-'0';c=getchar();}
	return res;
}
void write (int x) {
	if (x<=9) {putchar(x+'0');}
	else {
		write(x/10);
		putchar(x%10+'0');
	}
}
int main () {
	t=read();
	for (int ii=1;ii<=t;ii++) {
		n=read();
		for (int i=1;i<=n;i++) {a[i]=read();a[i]=i-a[i]+1;}
		for (int i=a[n];i<=n;i++) {s[i]=n;}
		int flg=1;
		for (int i=n-1;i>=1;i--) {
			if (a[i]!=a[i+1]) {
				int l=a[i],m=a[i+1],r=i,len=r-m+2;
				if (m-l<len) {flg=0;break;}
				for (int j=l,k=m;j<m;j++,k=(k==r+1?m:k+1)) {s[j]=s[k]-(k==r+1);}
				if ((m-l)%len) {s[m-1]--;}
			}
		}
		if (!flg) {printf("-1\n");}
		else {
			for (int i=1;i<=n;i++) {write(s[i]);putchar(" \n"[i==n]);}
		}
	}
	return 0;
}
