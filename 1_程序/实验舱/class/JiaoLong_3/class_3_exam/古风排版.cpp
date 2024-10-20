#include<bits/stdc++.h>
using namespace std;

string s;
char a[1002][1002] = {0};

void cz(int n,int l){
	int k = 0;
	for(int j = l - 1;j >= 0;j--){
		for(int i = 0;i < n;i++){
			a[i][j] = s[k ++];
		}
	}
}

int main(){
	int n;
	cin >> n;
	getline(cin,s);
	getline(cin,s);
	int c = s.size();
	int l = ceil((double)c / (double)n);
	int sx = l * n - c;
	while(sx --){
		s = s + " ";
	}
	cz(n,l);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < l;j++){
			cout << a[i][j];
		}
		cout << endl;
	}
	
	return 0;
} 
