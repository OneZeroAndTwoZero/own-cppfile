#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];

bool ok(int a){
	if(a % 2 == 0) return 1;
	else return 0;
}

int main(){
	cin >> n;
	int sum = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		sum += a[i];
	}
	
	double avg = sum / (double)n;
	printf("%.1lf\n",avg);
	for(int i = 0;i < n;i++){
		if(a[i] < avg){
			cout << i + 1 << " ";
		}
	}
	
	return 0;
} 
