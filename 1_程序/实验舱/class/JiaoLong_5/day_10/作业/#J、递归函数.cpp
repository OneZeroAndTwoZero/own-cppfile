#include<bits/stdc++.h>
using namespace std;

long long a,b,c;
long long ans[25][25][25] = {0};

long long cz(long long a,long long b,long long c){
	if(a <= 0 || b <= 0 || c <= 0) return 1;
	if(a > 20 || b > 20 || c > 20) return cz(20,20,20);
	if(ans[a][b][c] == 0){
		if(a < b && b < c){
			ans[a][b][c] = cz(a,b,c - 1) + cz(a,b - 1,c - 1) - cz(a,b - 1,c);
		}else{
			ans[a][b][c] = cz(a - 1,b,c) + cz(a - 1,b - 1,c) + cz(a - 1,b,c - 1) - cz(a - 1,b - 1,c - 1);
		}
	}
	return ans[a][b][c];
}

int main(){
	while(1){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a == -1 && b == -1 && c == -1) return 0;
		printf("%d\n",cz(a,b,c));
	}

	return 0;
}

