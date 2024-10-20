#include<bits/stdc++.h>
using namespace std;

int ans[1000][8] = {0};
string s;

void totwo(int a,int k){
	int s = 0;
	int i = 7;
	while(a){
		ans[k][i] = a % 2;
		a /= 2;
		i --;
	}
} 

int main(){
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		int x = (int)s[i];
		totwo(x,i);
	}
	for(int i = 0;i < s.size();i++){
		for(int j = 0;j < 8;j++){
			cout << ans[i][j];
		}
		cout << endl;
	}

	return 0;
}

