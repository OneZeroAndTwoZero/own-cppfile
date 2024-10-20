#include<bits/stdc++.h>
using namespace std;

struct r{
	int g,b;
};

int n,ans = 100000000;
r a[100];
int c = 1;

int check(){
	int sum1 = 1,sum2 = 0;
	for(int i = 0;i < n;i++){
		if((c >> i) & 1){
			sum1 *= a[i].b;
			sum2 += a[i].g;
		}
	}
	return abs(sum2 - sum1);
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&a[i].b,&a[i].g);
	}
	for(c = 1;c <= (1 << n);c ++){
		ans = min(ans,check());
	}
	printf("%d\n",ans);

	return 0;
}

