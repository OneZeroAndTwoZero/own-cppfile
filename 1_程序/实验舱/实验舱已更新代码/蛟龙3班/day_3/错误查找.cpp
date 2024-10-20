#include<bits/stdc++.h>
using namespace std;

int a[101][101] = {0};

int main(){
	int n;
	cin >> n;
	int c1 = 0,c2 = 0;
	int d1,d2;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n;i++){
		int sum = 0;
		for(int j = 0;j < n;j++){
			if(a[i][j] == 1) sum ++;
		}
		if(sum % 2 == 1) d1 = i;
		else c1 ++;
	}
	for(int j = 0;j < n;j++){
		int sum = 0;
		for(int i = 0;i < n;i++){
			if(a[i][j] == 1) sum ++;
		}
		if(sum % 2 == 1) d2 = j;
		else c2 ++;
	}
	if(c1 == n && c2 == n){
		cout << "OK" << endl;
	}else if(c1 == n - 1 && c2 == n - 1){
		cout << ++c1 << " " << ++c2 << endl;
	}else{
		cout << "Corrupt" << endl;
	}

	return 0;
}

