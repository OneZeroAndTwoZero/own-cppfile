#include<bits/stdc++.h>
using namespace std;

int b[10005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		if(tem % 2 == 0){
			b[tem] ++;
		}
	}
	for(int i = 10000;i >= 0;i--){
		if(b[i]){
			cout << i << " ";
		}
	}

	return 0;
}

