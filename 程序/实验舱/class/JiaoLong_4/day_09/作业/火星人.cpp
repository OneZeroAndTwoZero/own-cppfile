#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < m;i++){
		next_permutation(a,a + n);
	}
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]);
	}
	puts("");

	return 0;
}
