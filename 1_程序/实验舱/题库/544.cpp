#include<bits/stdc++.h>
using namespace std;

int b[1001] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		b[tem] ++;
	}
	for(int i = 0;i < 1001;i++){
		if(b[i] != 0){
			cout << i << " " << b[i] << endl;
		}
	}

	return 0;
}


