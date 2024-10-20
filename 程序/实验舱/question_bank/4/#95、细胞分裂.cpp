#include<bits/stdc++.h>
using namespace std;

int ans,m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&m);
	for(int i = 1;i < m;i <<= 1){
		++ ans;
	}
	printf("%d\n",ans);
	
	return 0;
}