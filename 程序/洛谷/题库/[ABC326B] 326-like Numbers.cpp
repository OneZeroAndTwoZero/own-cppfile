#include<bits/stdc++.h>
using namespace std;

int n;

bool check(int x){
	if(x < 100 || x >= 1000) return 0;
	int num1 = x % 10,num2 = (x / 10) % 10,num3 = x / 100;
	return num2 * num3 == num1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = n;;i ++){
		if(check(i)){
			printf("%d\n",i);
			return 0;
		}
	}

	return 0;
}