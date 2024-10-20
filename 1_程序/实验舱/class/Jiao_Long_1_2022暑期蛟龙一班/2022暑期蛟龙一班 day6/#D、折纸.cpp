#include<bits/stdc++.h>
using namespace std;

double a;
int n,f_num;

int main(){
	cin >> a >> n;
	for(int i = 0;i < n;i++){
		a *= 2;
	}
	f_num = floor(a / 3);
	printf("%.1lf\n%d\n",a,f_num);
	
	return 0;
} 
