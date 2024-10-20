#include<bits/stdc++.h>
using namespace std;

int main(){
	double i,sum = 0,av;
	for(int j = 1;j <= 12;j++){
		cin >> i;
		sum += i;
	}
	av = sum / 12.0;
	printf("%.2lf",av);
	
	return 0;
} 
