#include<bits/stdc++.h>
using namespace std;

int a,b;

int main(){
	cin >> a >> b;
	if(!((a & 1) ^ (b & 1))) cout << "1" << endl;
	else cout << a+b << endl;
	
	return 0;
} 
