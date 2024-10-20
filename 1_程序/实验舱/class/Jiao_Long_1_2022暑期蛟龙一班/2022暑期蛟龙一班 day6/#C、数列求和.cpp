#include<bits/stdc++.h>
using namespace std;

int n;
long long sum = 0,num = 2;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		sum += num;
		num = num * 10 + 2;
	}
	cout << sum << endl;
	
	return 0;
} 
