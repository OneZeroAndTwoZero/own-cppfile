#include<bits/stdc++.h>
using namespace std;

int n,m,t;

int main(){
	scanf("%d %d",&n,&m);
	for(int k = 0;k < 5;k ++){
		t = k;
		for(int i = t + 1;i <= n;i ++){
			t = (t + m) % i;
		}
		printf("%d ",t + 1);
	}

	return 0;
}

