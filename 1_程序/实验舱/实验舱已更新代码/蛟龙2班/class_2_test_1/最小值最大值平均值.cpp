#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int min = a[0],max = a[0],sum = 0;
	for(int i = 0;i < n;i++){
		if(a[i] < min){
			min = a[i];
		}
		if(a[i] > max){
			max = a[i];
		}
		sum += a[i];
	}
	double avg = (double)sum / n;
	printf("min:%d\n",min);
	printf("max:%d\n",max);
	printf("avg:%.2lf\n",avg);
	
	return 0;
}
