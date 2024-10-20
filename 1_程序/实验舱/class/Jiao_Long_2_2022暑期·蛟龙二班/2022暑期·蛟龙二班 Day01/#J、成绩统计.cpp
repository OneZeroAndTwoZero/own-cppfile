#include<bits/stdc++.h>
using namespace std;

int n,sum = 0;
int a[100005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		sum += a[i];
	}
	double avg = (double)sum / n;
	printf("%.2lf\n",avg);
	for(int i = 0;i < n;i++){
		if(a[i] > avg){
			printf("%d %d\n",i + 1,a[i]);
		}
	}
	
	return 0;
} 
