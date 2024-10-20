#include<bits/stdc++.h>
using namespace std;

int n,x;
int a[10005] = {0};

bool zhao(int u){
	int l = 0,r = n - 1;
	while(l <= r){
		int mid = (l + r) >> 1;
		if(a[mid] == u) return 1;
		if(a[mid] < u){
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return 0;
}

int main(){
	scanf("%d %d",&n,&x);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			int t = 0 - a[i] * x * x - a[j] * x;
			if(zhao(t)){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");

	return 0;
}

