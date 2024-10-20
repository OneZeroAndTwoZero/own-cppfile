#include<bits/stdc++.h>
using namespace std;

int n,now = 0;
int a[4] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;now <= n;i++){
		now = pow(i,2);
		a[0] = i;
		for(int j = 0;now <= n;j++){
			now = pow(i,2) + pow(j,2);
			a[1] = j;
			for(int k = 0;now <= n;k++){
				now = pow(i,2) + pow(j,2) + pow(k,2);
				a[2] = k;
				int t = (sqrt(n - now));
				if(t * t == n - now){
					a[3] = (int)(sqrt(n - now));
					sort(a,a + 4);
					printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
					return 0;
				}
			}
			now = pow(i,2) + pow(j,2);
		}
		now = pow(i,2);
	}

	return 0;
}

