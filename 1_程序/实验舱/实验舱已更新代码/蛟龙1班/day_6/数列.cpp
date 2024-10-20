#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long sum = 0;
	long long num = 2;
	for(int i = 0;i < n;i++){
		sum+=num;
		num = num*10 + 2;
	}
	cout << sum << endl;
	
	return 0;
} 
