#include<bits/stdc++.h>
using namespace std;

int n;
int sum[100005] = {0},a[100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&sum[i]);
	}
	for(int i = 1;i <= n;i++){
		a[i] = sum[i] - sum[i - 1];
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

