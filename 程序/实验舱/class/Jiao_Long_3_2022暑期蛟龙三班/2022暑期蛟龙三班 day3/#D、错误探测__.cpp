#include<bits/stdc++.h>
using namespace std;
int a[102][102] = {0}; 

int main(){
	int n;
	cin >> n;
	int p1 = 0,p2 = 0,d1,d2;
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
		if(sum % 2 == 0)p1 ++;
		else d1 = i;
	}
	for(int i = 0;i < n;i++){
		int sum = 0;
		for(int j = 0;j < n;j++){
			if(a[j][i] == 1) sum ++;
		}
		if(sum % 2 == 0)p2 ++;
		else d2 = i;
	}
	
	if(p1 == n && p2 == n) cout << "OK" << endl;
	else if(p1 + 1 == n && p2 + 1 == n) cout << d1 + 1 << " " << d2 + 1 << endl;
	else cout << "Corrupt" << endl;

	return 0;
}
