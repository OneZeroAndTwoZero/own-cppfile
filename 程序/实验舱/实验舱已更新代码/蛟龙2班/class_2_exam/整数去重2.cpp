#include<bits/stdc++.h>
using namespace std;

int b[1001] = {0};

int main(){
	int N;
	cin >> N;
	int a[N];
	int sum = 0;
	for(int i = 0;i < N;i++){
		cin >> a[i];
		b[a[i]]++;
		if(b[a[i]] == 1){
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
