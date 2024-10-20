#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[500005];

void pai(int n,int k){
	for(int i = 0;i < k;i++){
		for (int i = 0; i < n - 1; ++i)
    		if (a[i] > a[i + 1]) swap(a[i], a[i + 1]);
    }
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	if(k == n - 1) sort(a,a + n);
	else if(n <= 10000) pai(n,k);
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]);
	}
	puts("");

	return 0;
}

