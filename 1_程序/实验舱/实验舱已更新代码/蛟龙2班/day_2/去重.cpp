#include<bits/stdc++.h>
using namespace std;
int b[1001] = {0};

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	int sum = 0;
	for(int i = 0;i < 1001;i++){
		if(b[i] != 0){
			sum ++;
		}
	}
	cout << sum << endl;
	for(int i = 0;i < 1001;i++){
		if(b[i] != 0){
			cout << i << endl;
		}
	}
	
	return 0;
}  
