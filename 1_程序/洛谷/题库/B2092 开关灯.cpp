#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i <= n / i;i ++){
		printf("%d ",i * i);
	}

	return 0;
}

