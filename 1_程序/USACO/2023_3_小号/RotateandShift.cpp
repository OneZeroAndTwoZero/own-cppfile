#include<bits/stdc++.h>
using namespace std;

int n,k,t;
int a[200005] = {0};
int ans[200005] = {0};

int main(){
	scanf("%d %d %d",&n,&k,&t);
	for(int i = 0;i < n;i++){
		ans[i] = i;
	}
	for(int i = 0;i < k;i++){
		scanf("%d",&a[i]);
	}
	while(t --){
		int tem = ans[a[k - 1]];
		for(int i = k - 1;i > 0;i--){
			ans[a[i]] = ans[a[i - 1]];
		}
		ans[a[0]] = tem;
		for(int i = 0;i < k;i++){
			a[i] = (a[i] + 1) % n;
		}
	}
	for(int i = 0;i < n - 1;i++){
		printf("%d ",ans[i]);
	}
	printf("%d\n",ans[n - 1]);

	return 0;
}

