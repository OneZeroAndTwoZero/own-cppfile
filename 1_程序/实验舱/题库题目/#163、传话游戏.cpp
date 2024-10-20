#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[100005] = {0};

int main(){
	scanf("%d %d",&s,&n);
	a[1] = 1;
	for(int i = 1;i <= s;i++){
		for(int j = i + 1;j - i <= n;j++){
			a[j] += a[i];
			a[j] %= 10000;
		}
	}
	printf("%d\n",a[s]);

	return 0;
}

