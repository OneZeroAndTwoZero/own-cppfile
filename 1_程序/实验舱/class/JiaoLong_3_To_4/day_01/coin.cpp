#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int j = 0,o = 0;
	for(int i = 0;i < n;i++){
		long long pi;
		cin >> pi;
		if(pi % 2 == 0){
			o ++;
		}else{
			j ++;
		}
	}
	if(o > j){
		cout << j << endl;
	}else{
		cout << o << endl;
	}

	return 0;
}


