#include<bits/stdc++.h>
using namespace std;

string a[20],b[20];

int main(){
	for(int i = 0;i < 15;i++){
		getline(cin,a[i]);
	}
	for(int i = 0;i < 15;i++){
		getline(cin,b[i]);
	}
	for(int i = 0;i <15;i++){
		for(int j = 0;j < 41;j++){
			if(a[i][j] != b[i][j]){
				cout << i << " " << j << " " << a[i][j] << " " << b[i][j] <<endl;
			}
		}
	}
	for(int i = 0;i < 100000;i++){
		cout << i << " ";
	}

	return 0;
}

