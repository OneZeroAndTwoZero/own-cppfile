#include<bits/stdc++.h>
using namespace std;

int a[1005][1005] = {0};

void sp(int n){
	int fj = n / 2;
	if(n % 2 == 1) fj ++;
	for(int i = 0;i < n / 2;i++){
		for(int j = 0;j < n;j++){
			swap(a[n / 2 - i - 1][j],a[fj + i][j]);
		}
	}
}

void cz(int n){
	int fj = n / 2;
	if(n % 2 == 1) fj ++;
	for(int i = 0;i < n / 2;i++){
		for(int j = 0;j < n;j++){
			swap(a[j][n / 2 - i - 1],a[j][fj + i]);
		}
	}
}

int main(){
	bool oks = 0,c = 0;
	int n;
	string s;
	cin >> n >> s;
	int k = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			a[j][i] = ++k;
		}
	}
	for(int i = 0;i < s.size();i++){
		if(s[i] == 'V') c = !c;
		if(s[i] == 'H') oks = !oks;
	}
	if(c){
		cz(n);
	}
	if(oks){
		sp(n);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

