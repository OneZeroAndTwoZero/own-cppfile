#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		int check = 0;
		for(int j = 1;;j++){
			if(check + 1 == tem){
				cout << 1 << endl;
				break;
			}
			if(check + 1 > tem){
				cout << 0 << endl;
				break;
			}
			check += j;
		}
	}

	return 0;
}

