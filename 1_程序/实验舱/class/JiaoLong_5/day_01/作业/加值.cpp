#include<bits/stdc++.h>
using namespace std;

int n,q,l,r;
int a[100005] = {0},d[100005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		d[i] = a[i] - a[i - 1];
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d %d",&l,&r);
		d[l] += 1,d[r + 1] -= 1;
	}
	for(int i = 1;i <= n;i++){
		a[i] = a[i - 1] + d[i];
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

