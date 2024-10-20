#include<bits/stdc++.h>
using namespace std;

int n,t;
int num1 = 0,num5 = 0,num10 = 0;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&t);
		if(t == 1) num1 ++;
		if(t == 5) num5 ++;
		if(t == 10) num10 ++;
	}
	printf("%d\n%d\n%d\n",num1,num5,num10);

	return 0;
}

