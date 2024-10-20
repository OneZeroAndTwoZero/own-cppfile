#include<bits/stdc++.h>
using namespace std;

int n,m,now,ans;
int a[200005] = {0},b[200005] = {0};

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < m;i++){
		scanf("%d",&b[i]);
	}
	for(int i = 0;i < m;i++){
		ans = b[i] + a[0];
		for(int j = 1;j < n;j++){
			if(ans == 1) break;
			now = b[i] + a[j];
			ans = gcd(ans,now);
		}
		printf("%d\n",ans);
	}

	return 0;
}

