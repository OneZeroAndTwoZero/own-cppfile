#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
int n,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	scanf("%d",&x);
	x = n - x;
	sort(a,a + n);
	printf("%d\n",a[x]);

	return 0;
}


