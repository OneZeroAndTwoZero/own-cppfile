#include<bits/stdc++.h>
using namespace std;

int n;
long long a[105] = {0},ans[105] = {0};

bool cmp(long long a,long long b){
	return b * 2 == a || a * 3 == b;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a + n,cmp);
	for(int i = 0;i < n;i++){
		printf("%lld ",ans[i]);
	}
	printf("\n");

	return 0;
}

