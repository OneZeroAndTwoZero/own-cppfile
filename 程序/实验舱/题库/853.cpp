#include<bits/stdc++.h>
using namespace std;

bool su(int m){
	if(m < 2) return 0;
	if(m == 2) return 1;
	if(m % 2 == 0) return 0;
	for(int i = 3;i * i <= m;i += 2){
		if(m % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int m;
		cin >> m;
		if(su(m)){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	
	return 0;
}

