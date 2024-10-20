#include<bits/stdc++.h>
using namespace std;

int sl = 0;
int n,ans = 0;
int y[10005] = {0};

bool ok(int t){
	while(t){
		int c = t % 10;
		if(c == 3 || c == 7) return 0;
		t /= 10;
	}
	return 1;
}

int main(){
	for(int i = 1;i <= 10000;i++){
		if(ok(i)) y[sl ++] = i;
	}
	scanf("%d",&n);
	for(int i = 0;i < sl;i ++){
		if(y[i] >= n) break;
		for(int j = i + 1;j < sl;j ++){
			if(y[i] + y[j] >= n) break;
			int sx = n - y[i] - y[j];
			if(ok(sx)){
				if(y[i] >= 0 && y[j] >= 0 && sx >= 0 && y[i] > sx && y[j] > sx){
					ans ++;
				}
			}
		}
	}
	printf("%d\n",ans);

	return 0;
}

