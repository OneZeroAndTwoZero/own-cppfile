#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		if(n % 3 == 0){
			for(int i = 0;i * 3 < n;i++){
				cout << "21";
			}
		}else if(n % 3 == 1){
			for(int i = 0;i * 3 < n - 1;i++){
				cout << "12";
			}
			cout << "1";
		}else{
			for(int i = 0;i * 3 < n - 2;i++){
				cout << "21";
			}
			cout << "2";
		}
		cout << endl;
	}

	return 0;
}

