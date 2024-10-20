#include<bits/stdc++.h>
using namespace std;

int n;
char a[100][1000] = {0};

int main(){
	cin >> n;
	getchar();
	string s;
	getline(cin,s);
	int sl = ceil((double)s.size() / n);
	for(int i = 0;i < sl * n - s.size();i = i){
		s = s + " ";
	}
	int k = 0;
	for(int j = sl - 1;j >= 0;j--){
		for(int i = 0;i < n;i++){
			a[i][j] = s[k];
			k++;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < sl;j++){
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}

