#include<bits/stdc++.h>
using namespace std;

int l,r;
int cnt[2];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&l,&r);
	for(int i = l;i <= r;i++){
		printf("%d",i);
		++ cnt[i >= 0];
	}
	printf("\n%d\n%d\n",cnt[1],cnt[0]);
	
	return 0;
}