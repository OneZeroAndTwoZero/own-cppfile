#include<bits/stdc++.h>
using namespace std;

char a[101][101] = {0};

int main(){
	int r,c;
	cin >> r >> c;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			if(a[i][j] == '#'){
				sum ++;
				if(a[i][j + 1] == '#') a[i][j + 1] = '.';
				if(a[i + 1][j] == '#') a[i + 1][j] = '.';
			}
		}
	}
	cout << sum << endl;

	return 0;
}

