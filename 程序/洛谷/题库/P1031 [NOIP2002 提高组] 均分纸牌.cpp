#include<bits/stdc++.h>
using namespace std;

int n,sum,ans = 0;
int a[10005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	sum /= n;
	for(int i = 0;i < n - 1;i ++){
		if(a[i] != sum){
			a[i + 1] += a[i] - sum;
			a[i] = sum;
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

