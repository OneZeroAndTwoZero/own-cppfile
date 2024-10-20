#include<bits/stdc++.h>
using namespace std;

int sum,diff;
int num_2,num_3;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&sum,&diff);
	num_3 = (sum + (diff << 1)) / 5;
	num_2 = num_3 - diff;
	printf("%d %d\n",num_3,num_2);
	
	return 0;
}