#include<bits/stdc++.h>
#define	INF	0x3f3f3f3f
#define	LL	long long
#define	MAXN	10186
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
	int fla = 0;
	if (la > lb) fla = 1;
	else if (la < lb) fla = -1;
	else {
		for (int i = 1; i <= la; ++i){
			if (A[i] > B[i]) {fla = 1; break;}
			else if (A[i] < B[i]) {fla = -1; break;}
		}
	}
	if (fla == 0) {
		printf("0\n");
		return 0;
	}
	if (fla < 0) {
		printf("-");
		swap(A, B);
		swap(la, lb);
	}
	for (int i = 1; i <= la; ++i)
		a[i] = A[la - i + 1] - '0';
	for (int i = 1; i <= lb; ++i)
		b[i] = B[lb - i + 1] - '0';
	for (int i = 1; i <= la; ++i)
		c[i] = a[i] - b[i];
	for (int i = 1; i <= la; ++i){
		if (c[i] < 0) {
			c[i + 1]--;
			c[i] += 10;
		}
	}
	fla = 0;
	for (int i = la; i >= 1; --i){
		if (fla == 0) {
			if (c[i] > 0) {
				printf("%d", c[i]);
				fla = 1;
			}
		} else printf("%d", c[i]);
	}
	printf("\n");
	return 0;
}
