#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
char c[155][155];
int a[155][155] = {0};
int sum[155][155] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%s",&c[i]);
		for(int j = 0;j < n;j ++){
			a[i][j + 1] = c[i][j] == 'W' ? 0 : 1;
			sum[i][j + 1] = sum[i - 1][j + 1] + sum[i][j + 1 - 1] + a[i][j + 1] - sum[i - 1][j + 1 - 1];
		}
	}
	for(int x1 = 1;x1 <= n;x1 ++){
		for(int y1 = 1;y1 <= n;y1 ++){
			for(int x2 = x1;x2 <= n;x2 ++){
				for(int y2 = y1;y2 <= n;y2 ++){
					int t = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
					if(!t) ans ++;
				}
			}
		}
	}
	printf("%d\n",ans);

	return 0;
}

