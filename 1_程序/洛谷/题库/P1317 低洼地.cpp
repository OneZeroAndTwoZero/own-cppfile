#include<bits/stdc++.h>
using namespace std;

bool ok = 0;
int n,ans = 0;
int a[10005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 2;i <= n;i ++){
		if(a[i] < a[i - 1]) ok = 1;
		else if(a[i] > a[i - 1] && ok) ok = 0,ans ++;
	}
	printf("%d\n",ans);

	return 0;
}

