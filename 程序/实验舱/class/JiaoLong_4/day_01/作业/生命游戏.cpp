#include<bits/stdc++.h>
using namespace std;

int n,k,t,ans;
bool a[105][105] = {0},b[105][105] = {0},check[105][105] = {0};
int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

int cz(int r){
	if(r == k + 1) return -1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int cnt = 0;
			for(int k = 0;k < 8;k ++){
				int ti = i + dir[k][0],tj = j + dir[k][1];
				if(ti < 0) ti += n;
				if(tj < 0) tj += n;
				ti %= n,tj %= n;
				if(a[ti][tj]){
					cnt ++;
				}
			}
			if(!a[i][j] && cnt == 3){
				b[i][j] = 1;
			}else if(a[i][j] && (cnt < 2 || cnt > 3)){
				b[i][j] = 0;
			}else{
				b[i][j] = a[i][j];
			}
		}
	}
	bool pd = 1;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			a[i][j] = b[i][j];
			b[i][j] = 0;
			if(a[i][j] != check[i][j]) pd = 0;
		}
	}
	if(pd) return r;
	return cz(r + 1);
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&k);
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				a[i][j] = b[i][j] = check[i][j] = 0;
				scanf("%d",&check[i][j]);
				a[i][j] = check[i][j];
			}
		}
		ans = cz(1);
		if(ans > 0){
			puts("YES");
			printf("%d\n",ans);
		}else{
			puts("NO");
		}
	}

	return 0;
}

