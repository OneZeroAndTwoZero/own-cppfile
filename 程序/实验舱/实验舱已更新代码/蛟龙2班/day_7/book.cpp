#include<bits/stdc++.h>
using namespace std;

double cha(int a,double b){
	return (double)a * b;
}

int main(){
	double money[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int buy[10];
	double sum = 0;
	for(int i = 0;i < 10;i++){
		cin >> buy[i];
		sum += cha(buy[i],money[i]);
	}
	printf("%.1lf",sum);
	
	return 0;
} 
