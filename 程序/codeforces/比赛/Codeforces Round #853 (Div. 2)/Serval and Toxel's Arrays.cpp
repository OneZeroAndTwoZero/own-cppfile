#include<bits/stdc++.h>
using namespace std;

int t,n,m,idx,x;
int a[200005] = {0};
//unordered_map<int,int>zhao;

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d",&n,&m);
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}
		for(int i = 0;i < m;i++){
			scanf("%d %d",&idx,&x);
		}
		long long ans = m * (m - 1) * n;
		for(int i = 0;i < m;i++){
			ans += i * (n - i - 1);
		}
		printf("%lld\n",);
	}

	return 0;
}

