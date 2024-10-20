#include<bits/stdc++.h>
using namespace std;

int main(){
	int min,max;
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int j = 0;j < n;j++){
		if(a[j] >= max){
			max = a[j];
		}
		if(a[j] <= min){
			min = a[j];
		}
	}
	int cha = max - min;
	cout << cha << endl;
	
	return 0;
}
