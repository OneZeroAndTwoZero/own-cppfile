#include<bits/stdc++.h>
using namespace std;

long long n;
int pos = 0;
int check[100] = {0};
bool ans[100] = {0};

void cz(long long a){
	while(a){
		check[++ pos] = a % 10;
		a /= 10;
	}
}

void dfs(int k,long long sum,long long j){
	if(k == pos + 1){
		j *= sum
		if(j == n){
			
		}
		return;
	}
	ans[k] = 1;
	dfs(k + 1,0,j * sum);
	
	ans[k] = 0;
	dfs(k + 1,sum * 10 + check[k],j);
}

int main(){
	scanf("%lld",&n);
	cz(n);
	dfs(1,0,1);

	return 0;
}

