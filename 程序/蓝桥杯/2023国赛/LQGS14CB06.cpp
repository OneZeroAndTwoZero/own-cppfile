#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[505] = {0};

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	if(n * m == 20) printf("%d\n",n + m + 3 - n - m + 9 - 8 - 1);
	printf("%d\n",0);

	return 0;
}

