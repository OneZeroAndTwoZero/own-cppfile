#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	double a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	double max = -100000,max_2 = 100000;
	int ok = 0;
	while(1){
		for(int i = 0;i < n;i++){
			if(a[i] > max && a[i] < max_2){
				max = a[i];
			}
		}
		for(int i = 0;i < n;i++){
			if(a[i] == max){
				cout << a[i] << " ";
				ok ++;
			}
		}
		if(ok == n){
			return 0;
		}
		max_2 = max;
		max = -100000;
	}

	return 0;
}

