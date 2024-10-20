#include<bits/stdc++.h>
using namespace std;
int n,m = 1;
double num,sum = 0;
int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		num = 1.0 / m;
		m += 2;
		sum += num;
	}
	printf("%.1lf",sum);
	
	return 0;
} 
