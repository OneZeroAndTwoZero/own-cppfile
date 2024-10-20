#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int temp = a;
	int ws = 0;
	int b[200];
	int i = 0;
	while(temp){
		b[i] = temp % 2;
		temp /= 2;
		i++;
	}
	for(int j = i - 1;j >= 0;j--){
		cout << b[j];
	}
	
	return 0;
} 
