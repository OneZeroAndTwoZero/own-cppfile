#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int tem = n;
	int s = 0;
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
