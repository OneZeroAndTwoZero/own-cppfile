#include<bits/stdc++.h>
using namespace std;

double max(double a[],int n){
	double max = a[0];
	for(int i = 0;i < n;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

double min(double a[],int n){
	double min = a[0];
	for(int i = 0;i < n;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	return min;
}

int main(){
	int n;
	cin >> n;
	double white[n];
	for(int i = 0;i < n;i++){
		cin >> white[i];
	}
	double max_x = max(white,n);
	double min_x = min(white,n);
	double white_2[n - 2];
	int j = 0;
	double sum = 0;
	int max_c = 0,min_c = 0;
	for(int i = 0;i < n;i++){
		if(white[i] == max_x && max_c == 0){
			max_c ++;
			continue;
		}else if(white[i] == min_x && min_c == 0){
			min_c ++;
			continue;
		}else{
			white_2[j] = white[i];
			j++;
			sum += white[i];
		}
	}
	double max_2 = max(white_2,n-2);
	double min_2 = min(white_2,n - 2);
	double cha = 0;
	double avg = sum / (n - 2);
	for(int i = 0;i < n-2;i++){
		if(fabs(avg - white_2[i]) > cha){
			cha = fabs(avg - white_2[i]);
		}
	}
	printf("%.2lf %.2lf",avg,cha);
	
	return 0;
} 
