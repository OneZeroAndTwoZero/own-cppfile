#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		sum += a[i];
	}
	double avg = (double)sum / n;
	printf("%.2lf\n",avg);
	
	for(int i = 0;i < n;i++){
		if(a[i] > avg){
			cout << i+1 << " " << a[i] << endl;
		}
	}
	
	return 0;
} 
