#include<bits/stdc++.h>
using namespace std;

char c[1000][1000];

void cun(int i,int j){
	c[i][j + 1] = '/';
	c[i][j + 2] = '\\';
	c[i + 1][j] = '/';
	c[i + 1][j + 1] = '_';
	c[i + 1][j + 2] = '_';
	c[i][j + 3] = '\\';
}

void out(){
	for(int i = 0;i < 1000;i++){
		for(int j = 0;j < 1000;j++){
			if(c[i][j] == '/') cout << '/';
			if(c[i][j] == '\\') cout << '\\';
			if(c[i][j] == '_') cout << '_';
		}
	}
}

void san(int n,int i,int j){
	if(n == 1){
		cun(i,j);
		return;
	}
	san(n - 1,i,j + 2 * (n - 1));
	san(n - 1,i + 2 * (n - 1),j);
	san(n - 1,i + 2 * (n - 1),j + 4 * (n - 1));
}

int main(){
	int n;
	cin >> n;
	san(n,0,0);
	out();

	return 0;
}
