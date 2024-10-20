#include<bits/stdc++.h>
using namespace std;

int n,m,sx,sy;
long long ans[105][105] = {0};

bool check(int x,int y){
	if(x == sx && y == sy) return 1;
	if(abs(x - sx) * abs(y - sy) == 2) return 1;
	return 0;
}

long long cz(int x,int y){
	if(check(x,y)) return 0;
	if(ans[x][y]) return ans[x][y];
	if(x > 0) ans[x][y] += cz(x - 1,y);
	if(y > 0) ans[x][y] += cz(x,y - 1);
	return ans[x][y];
}

int main(){
	scanf("%d %d %d %d",&n,&m,&sx,&sy);
	ans[0][0] = 1;
	printf("%lld\n",cz(n,m));

	return 0;
}

