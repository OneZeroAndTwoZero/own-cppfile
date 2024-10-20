#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0},check[100005] = {0},ans = 0; 

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		check[i] = check[a[i]] + 1;
		ans = max(ans,check[i]);
	}
	printf("%d\n",ans);

	return 0;
}

