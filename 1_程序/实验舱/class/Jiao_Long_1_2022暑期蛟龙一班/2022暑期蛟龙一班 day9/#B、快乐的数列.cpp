#include<bits/stdc++.h>
using namespace std;

long long n;
double sum = 0;

int main(){
	scanf("%ld",&n);
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
