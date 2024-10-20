#include<bits/stdc++.h>
using namespace std;

int n,cnt = 0;
int ans[1005][1005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i <= 1000;i ++){
		for(int j = 0;j <= i;j ++){
			cnt ++;
			if(j == 0 || j == i) ans[i][j] = 1;
			else ans[i][j] = (ans[i - 1][j] + ans[i - 1][j - 1]) % 1000000007;
			if(ans[i][j] == n){
				printf("%d\n",cnt);
				return 0;
			}
		}
	}
	

	return 0;
}

