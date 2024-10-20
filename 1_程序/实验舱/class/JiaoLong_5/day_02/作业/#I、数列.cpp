#include<bits/stdc++.h>
using namespace std;

int n,q,s,w;
long long k;
long long a[100005],num[100005] = {0};

int main(){
	scanf("%d %d",&n,&q);
	for(int i = 1;i <= n;i++){
		scanf("%d %d",&s,&w);
		a[i] = a[i - 1] + s;
		num[i] = w;
	}
	while(q --){
		scanf("%lld",&k);
		printf("%lld\n",num[lower_bound(a + 1,a + n + 1,k) - a]);
	}

	return 0;
}

