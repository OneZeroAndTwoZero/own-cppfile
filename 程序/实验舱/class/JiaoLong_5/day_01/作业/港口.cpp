#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0};
int d[100005] = {0};
long long z = 0,f = 0;

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		d[i] = a[i] - a[i - 1];
		if(i != 1){
			if(d[i] > 0) z += abs(d[i]);
			else f += abs(d[i]);
		}
	}
	printf("%lld\n",max(z,f));

	return 0;
}

