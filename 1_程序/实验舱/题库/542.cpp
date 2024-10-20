#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10];
	for(int i = 0;i < 10;i++){
		cin >> a[i];
	}
	int high;
	cin >> high;
	high += 30;
	int sum = 0;
	for(int i = 0;i < 10;i++){
		if(high >= a[i]){
			sum ++;
		}
	}
	cout << sum << endl;

	return 0;
}

