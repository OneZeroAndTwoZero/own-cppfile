#include<bits/stdc++.h>
using namespace std;

char a[1000005];
int n,l = 0,m = 0,s = 0;
long long ans[1000005] = {0},num;

int main(){
	scanf("%s",&a);
	n = strlen(a);
	for(int i = 0;i < n;i ++){
		if(a[i] == 'L'){
			l ++;
			if(m && s) ans[i] += 2;
			else if(s || m) ans[i] += 1;
		}else if(a[i] == 'M'){
			m ++;
			if(s) ans[i] ++;
		}else if(a[i] == 'S'){
			s ++;
		}
		num += ans[i];
	}
	printf("%lld\n",num);

	return 0;
}
//SSMMLL
//SSLSLS
