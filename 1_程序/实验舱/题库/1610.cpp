#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	char ch;
	bool flag;
	cin >> n >> m >> ch >> flag;
	for(int i = 0;i < m;i++){
		cout << ch;
	}
	cout << endl;
	for(int i = 1;i < n - 1;i ++){
		if(flag){
			for(int j = 0;j < m;j++){
				cout << ch;
			}
		}else{
			cout << ch;
			for(int j = 1;j < m - 1;j ++){
				cout << " ";
			}
			if(m > 1){
				cout << ch;
			}
		}
		cout << endl;
	}
	if(n > 1){
		for(int j = 0;j < m;j++){
			cout << ch;
		}
	}
	cout << endl;

	return 0;
}

