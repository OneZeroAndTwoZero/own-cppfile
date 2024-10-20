#include<bits/stdc++.h>
using namespace std;

int a,temp,ws,i;
int b[1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&a);
	temp = a;
	while(temp){
		b[i] = temp % 2;
		temp /= 2;
		i++;
	}
	for(int j = i - 1;j >= 0;j--){
		printf("%d",b[j]);
	}
	
	return 0;
} 
