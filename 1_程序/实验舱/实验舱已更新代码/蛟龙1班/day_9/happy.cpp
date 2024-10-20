#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	scanf("%ld",&n);
	double sum = 0;
	for(long long i = 1; i <= n;i++){
		sum += i*i;
    }
    sum /= n;
    if(n % 2 == 1){
    	sum -= 1;
	}
	printf("%.2lf",sum);
	
	return 0;
} 
