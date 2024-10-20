#include<bits/stdc++.h>
using namespace std;

int m;
int l = 1,r = 1,sum = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&m);
	for(l = 1;l <= m;l ++){
		while(sum < m && r <= m){
			r ++;
			sum += r;
		}
		if(sum == m && l != r){
			printf("%d %d\n",l,r);
		}
		sum -= l;
	}

	return 0;
}