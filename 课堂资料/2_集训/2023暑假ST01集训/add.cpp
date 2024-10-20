#include<bits/stdc++.h>
#define	INF	0x3f3f3f3f
#define	LL	long long
#define	MAXN	510
using namespace std;

template <typename T> void chkmin(T &x, T y){x = min(x, y);}
template <typename T> void chkmax(T &x, T y){x = max(x, y);}
template <typename T> void read(T &x){
	x = 0; int f = 1; char ch = getchar();
	while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)) {x = x * 10 + ch - '0'; ch = getchar();}
	x *= f;
}

char A[MAXN], B[MAXN];
int a[MAXN], b[MAXN], c[MAXN], la, lb; 

int main(){
	scanf("%s", A + 1);
	scanf("%s", B + 1);
	la = strlen(A + 1);
	lb = strlen(B + 1);
	for (int i = 1; i <= la; ++i)
		a[i] = A[la - i + 1] - '0';
	for (int i = 1; i <= lb; ++i)
		b[i] = B[lb - i + 1] - '0';
	for (int i = 1; i <= max(la, lb); ++i){
		c[i] = a[i] + b[i];
	}
	for (int i = 1; i <= max(la, lb); ++i){
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	if (c[max(la, lb) + 1] > 0) printf("%d", c[max(la, lb) + 1]);
	for (int i = max(la, lb); i >= 1; --i)
		printf("%d", c[i]);
	printf("\n");
	return 0;
}
