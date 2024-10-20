#include<bits/stdc++.h>
using namespace std;

int n,r;
int t[25] = {0};

void cz(int a[],int now){
	if(now == r){
		for(int i = 0;i < r;i++){
			printf("%d ",a[i]);
		}
		puts("");
		return;
	}
	for(int i = a[now - 1] + 1;i <= n;i++){
		a[now] = i;
		cz(a,now + 1);
	}
}

int main(){
	scanf("%d %d",&n,&r);
	for(int i = 1;i <= n;i ++){
		t[0] = i;
		cz(t,1);
	}

	return 0;
}

