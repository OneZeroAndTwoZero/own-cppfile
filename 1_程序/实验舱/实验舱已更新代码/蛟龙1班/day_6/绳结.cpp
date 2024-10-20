#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		if(m % 2 == 0){
			cout << "0";
			m = m / 2;
		}else{
			cout << "1";
			m = m / 2 + 1;
		}
	}
	
	return 0;
} 
