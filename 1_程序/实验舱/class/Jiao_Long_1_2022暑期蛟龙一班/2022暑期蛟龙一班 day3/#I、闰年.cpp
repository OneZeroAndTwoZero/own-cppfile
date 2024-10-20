#include<bits/stdc++.h>
using namespace std;

int a;

int main(){
	cin >> a;
	if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0 && a % 3200 != 0)) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
} 
