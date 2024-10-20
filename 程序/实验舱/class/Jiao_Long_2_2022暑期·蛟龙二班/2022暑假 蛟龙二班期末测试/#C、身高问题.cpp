#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int high[n];
	double sum = 0,avg;
	for(int i = 0;i < n;i++){
		cin >> high[i];
		sum += high[i];
	}
	avg = sum / (double)n;
	printf("%.1lf\n",avg);
	for(int i = 0;i < n;i++){
		if(high[i] > avg){
			printf("%d:%d ",i + 1,high[i]);
		}
	}
	
	return 0;
} 
