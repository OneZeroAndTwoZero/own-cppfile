#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h,m;
	cin >> n;
	int apples[n];
	for(int i = 0;i < n;i++){
		cin >> apples[i];
	}
	cin >> h >> m;
	int high = h + m;
	int sum = 0;
	for(int j = 0;j < n;j++){
		if(apples[j] <= high){
			sum += 1;
		}
	}
	cout << sum << endl;
	
	return 0;
} 
