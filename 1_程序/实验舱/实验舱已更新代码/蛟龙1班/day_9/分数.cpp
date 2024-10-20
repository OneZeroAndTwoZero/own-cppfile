#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int m = 1;
	double num;
	double sum = 0;
	for(int i = 1;i <= n;i++){
		num = 1.0 / m;
		m += 2;
		sum += num;
	}
	printf("%.1lf",sum);
	
	return 0;
} 
