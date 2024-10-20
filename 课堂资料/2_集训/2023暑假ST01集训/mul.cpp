#include<bits/stdc++.h>
#define	INF	0x3f3f3f3f
#define	LL	long long
#define	MAXN	2010
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
int a[MAXN], b[MAXN], c[MAXN + MAXN], la, lb; 

int main(){
	scanf("%s", A + 1);
	scanf("%s", B + 1);
	la = strlen(A + 1);
	lb = strlen(B + 1);
	for (int i = 1; i <= la; ++i)
		a[i] = A[la - i + 1] - '0';
	for (int i = 1; i <= lb; ++i)
		b[i] = B[lb - i + 1] - '0';
	if ((la == 1 && a[1] == 0) || (lb == 1 && b[1] == 0)) {
		printf("0\n");
		return 0;
	}
	for (int i = 1; i <= la; ++i)
		for (int j = 1; j <= lb; ++j){
			c[i + j - 1] += a[i] * b[j];
		}
	int pos = 1;
	while (c[pos] > 9 || pos < la + lb - 1) {
		c[pos + 1] += c[pos] / 10;
		c[pos] %= 10;
		pos++;
	}
	for (int i = pos; i >= 1; --i)
		printf("%d", c[i]);
	printf("\n");
	return 0;
}
