#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1005] = {0},t[1005] = {0};
int ans[1005][1005] = {0},pos = 0;

bool check(int h){
	for(int i = 0;i < n;i++){
		if(ans[h][i] != t[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i + k <= n;i++){
		for(int j = 0;j < n;j++) t[j] = a[j];
		sort(t + i,t + k + i);
		bool ok = 1;
		for(int j = 0;j < pos;j++){
			if(check(j) == 0) ok = 0;
		}
		if(ok){
			for(int j = 0;j < n;j++){
				ans[pos][j] = t[j];
			}
			pos++;
		}
	}
	printf("%d\n",pos);

	return 0;
}

