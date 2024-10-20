#include<bits/stdc++.h>
using namespace std;

int n;
int tem;
int s = 0;

int main(){
	cin >> n;
	tem = n;
	while(n){
		s *= 10;
		s += n % 10;
		n /= 10;
	}
	if(tem == s){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	
	return 0;
}
