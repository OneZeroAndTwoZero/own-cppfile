#include<bits/stdc++.h>
using namespace std;

int ans = 0,n;
int a[1005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i < n - 1;i++){
		if(a[i - 1] > a[i] && a[i + 1] > a[i] || a[i - 1] < a[i] && a[i + 1] < a[i]) ans ++;
	}
	printf("%d\n",ans);

	return 0;
}

