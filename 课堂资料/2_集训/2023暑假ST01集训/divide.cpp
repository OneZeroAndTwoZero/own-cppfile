#include<bits/stdc++.h>
#define	INF	0x3f3f3f3f
#define	LL	long long
#define	MAXN	5010
using namespace std;

template <typename T> void chkmin(T &x, T y){x = min(x, y);}
template <typename T> void chkmax(T &x, T y){x = max(x, y);}
template <typename T> void read(T &x){
	x = 0; int f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = x * 10 + ch - '0'; ch = getchar();}
	x *= f;
}

char A[MAXN];
int a[MAXN], c[MAXN], la;
LL b, rem; 

int main(){
	scanf("%s", A + 1);
	la = strlen(A + 1);
	for (int i = 1; i <= la; ++i)
		a[i] = A[la - i + 1] - '0';
	scanf("%lld", &b);
	for (int i = la; i >= 1; --i){
		rem = rem * 10 + a[i];
		c[i] = rem / b;
		rem %= b;
	}
	int fla = 0;
	for (int i = la; i >= 1; --i){
		if (fla == 0) {
			if (c[i] > 0) {
				printf("%d", c[i]);
				fla = 1;
			}
		} else printf("%d", c[i]);
	}
	if (fla == 0) printf("0");
	printf("\n");
	//printf("%lld\n", rem);
	return 0;
}
