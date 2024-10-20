#include<bits/stdc++.h>
#define mod 10000
using namespace std;

struct matrix{
	int r, c;
	int data[2][2];
	
	matrix operator * (const matrix &a) const{
		matrix res;
		res.r = r, res.c = a.c;
		for (int i = 0; i < res.r; i ++){
			for (int j = 0; j < res.c; j ++){
				res.data[i][j] = 0;
			}
		}
		for (int i = 0; i < res.r; i ++){
			for (int j = 0; j < res.c; j ++){
				for (int k = 0; k < c; k ++){
					res.data[i][j] += data[i][k] * a.data[k][j];
					res.data[i][j] %= mod;
				}
			}
		}
		return res;
	}
};

long long N;

matrix qpow(matrix a, long long b){
	matrix res;
	res.r = res.c = 2;
	res.data[0][0] = res.data[1][1] = 1;
	res.data[0][1] = res.data[1][0] = 0;
	while (b){
		// cout << b << ";;\n";
		if (b & 1) res = res * a;
		b >>= 1;
		a = a * a;
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif
	
	while (~scanf("%lld", &N)){
		if (N == -1) break;
		matrix ans;
		ans.r = 1, ans.c = 2;
		ans.data[0][0] = 1, ans.data[0][1] = 0;
		matrix cur;
		cur.r = cur.c = 2;
		cur.data[0][0] = cur.data[0][1] = cur.data[1][0] = 1;
		cur.data[1][1] = 0;
		cur = qpow(cur, N);
		ans = ans * cur;
		printf("%d\n", ans.data[0][1]);
	}

    return 0;
}
