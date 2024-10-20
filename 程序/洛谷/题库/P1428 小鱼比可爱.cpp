#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005] = {0};

int cz(int x){
	int cnt = 0;
	for(int i = 0;i < x;i ++){
		cnt += a[i] < a[x];
	}
	return cnt;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		printf("%d ",cz(i));
	}

	return 0;
}

