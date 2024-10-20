#include<bits/stdc++.h>
using namespace std;

int a,r,temp,ws = 0;
int b[200],i = 0;

int main(){
	cin >> a;
	temp = a;
	r = 2;
	while(temp){
		b[i] = temp % r;
		temp /= r;
		i++;
	}
	for(int j = i - 1;j >= 0;j--){
		cout << b[j];
	}
	
	return 0;
} 
