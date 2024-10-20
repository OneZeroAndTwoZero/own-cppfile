#include<bits/stdc++.h>
using namespace std;

int a[10001] = {0};
int n,k,tem;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&tem);
		if(tem % 2 == 1){
			a[k] = tem;
			k ++;
		}
	} 
	sort(a,a + k);
	for(int i = 0;i < k;i++){
		printf("%d%c",a[i]," \n"[i == k - 1]);
	}

	return 0;
}


