#include<bits/stdc++.h>
using namespace std;

int n,sum = 0;

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		sum += (i + 1);
	}
	cout << sum << endl;
	
	return 0;
} 
