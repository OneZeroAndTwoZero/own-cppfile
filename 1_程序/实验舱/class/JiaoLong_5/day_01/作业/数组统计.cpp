#include<bits/stdc++.h>
using namespace std;

int n,m,l,r,a_,b;
int a[100005] = {0};
int sum[100005][3] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		if(a[i] % 2 == 0){
			if(a[i] % 6 != 0){
				sum[i][0] = sum[i - 1][0] + 1;
			}else if(a[i] % 10 != 0){
				sum[i][1] = sum[i - 1][1] + 1;
			}
		}else if(a[i] % 3 == 0){
			if(a[i] % 6 != 0){
				sum[i][0] = sum[i - 1][0] + 1;
			}else if(a[i] % 10 != 0){
				sum[i][1] = sum[i - 1][1] + 1;
			}
		}else if(a[i] % 5 == 0){
			if(a[i] % 10 != 0){
				sum[i][1] = sum[i - 1][1] + 1;
			}else if(a[i] % 15 != 0){
				sum[i][2] = sum[i - 1][2] + 1;
			}
		}
	}
	for(int i = 0;i < 3;i++){
		for(int j = 1;j <= n;j++){
			cout << sum[i][j] << " ";
		}
		puts("");
	}
	while(m --){
		scanf("%d %d %d %d",&l,&r,&a_,&b);
		if(a_ * b == 6){
			printf("%d\n",sum[r][0] - sum[l - 1][0]);
		}else if(a_ * b == 10){
			printf("%d\n",sum[r][1] - sum[l - 1][1]);
		}else{
			printf("%d\n",sum[r][2] - sum[l - 1][2]);
		}
	}

	return 0;
}

