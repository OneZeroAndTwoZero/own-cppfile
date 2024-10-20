#include<bits/stdc++.h>
using namespace std;

int main(){
	double a;
	int n;
	cin >> a >> n;
	for(int i = 0;i < n;i++){
		a*=2;
	}
	int f_num = floor(a/3);
	printf("%.1lf\n%d",a,f_num);
	
	return 0;
} 
