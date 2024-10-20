#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[100005] = {0}; 

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		ans = max(ans,a[i] - i);
	}
	printf("%d\n",ans + n);

	return 0;
}

