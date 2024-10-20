#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};
int n = 3;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	for(int i = 0;i < n;i ++)
		scanf("%d",&a[i]);
	sort(a,a + 3);
	for(int i = 0;i < n;i ++)
		printf("%d ",a[i]);
	
	return 0;
}
