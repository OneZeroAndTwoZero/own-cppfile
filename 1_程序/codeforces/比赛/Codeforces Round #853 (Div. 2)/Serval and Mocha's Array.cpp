#include<bits/stdc++.h>
using namespace std;

int t,n;
int a[1005] = {0};

int gcd(int a,int b){
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}
		int min_ = 100000;
		for(int i = 0;i < n && min_ > 2;i++){
			for(int j = i + 1;j < n;j++){
				min_ = min(min_,gcd(a[i],a[j]));
				if(min_ <= 2) break;
			}
		}
		if(min_ > 2){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}

	return 0;
}

