#include<bits/stdc++.h>
using namespace std;

int n,a,b;

int main(){
	scanf("%d",&n);
	while(n --){
		scanf("%d %d",&a,&b);
		long long f[105] = {0};
		f[a] = 1;
		for(int i = a + 1;i <= b;i ++){
			f[i] = f[i - 1] + f[i - 2];
		}
		printf("%lld\n",f[b]);
	}

	return 0;
}

