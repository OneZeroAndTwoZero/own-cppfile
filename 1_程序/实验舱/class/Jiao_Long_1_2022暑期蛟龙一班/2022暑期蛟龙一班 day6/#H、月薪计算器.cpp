#include<bits/stdc++.h>
using namespace std;

double i,sum = 0,av;

int main(){
	for(int j = 1;j <= 12;j++){
		scanf("%lf",&i);
		sum += i;
	}
	av = sum / 12.0;
	printf("%.2lf",av);
	
	return 0;
} 
