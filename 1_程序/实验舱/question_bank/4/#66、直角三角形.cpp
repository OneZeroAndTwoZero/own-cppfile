#include<bits/stdc++.h>
using namespace std;

int a,b,c;

bool check(int x1,int x2,int x3){
	if(x1 * x1 + x2 * x2 == x3 * x3) return 1;
	return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
	
	scanf("%d %d %d",&a,&b,&c);
	if(check(a,b,c) || check(a,c,b) || check(b,c,a)){
		printf("%d %d %d\n",a * a,b * b,c * c);
	}else{
		printf("%d %d %d\n",a,b,c);
	}
	
	return 0;
}