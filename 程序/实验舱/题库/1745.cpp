#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 0,tem;
	while(n != 3){
		cin >> tem;
		if(tem != 6) break;
		n ++;
	}
	int yh = pow(10,n);
	if(yh == 1) yh = 0;
	cout << yh << endl;

	return 0;
}

