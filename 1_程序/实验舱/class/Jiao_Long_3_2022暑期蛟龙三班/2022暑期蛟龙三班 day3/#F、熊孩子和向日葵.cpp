#include<bits/stdc++.h>
using namespace std;

int a[101][101] = {0};
int b[101][101] = {0};

void out(int n){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

void shun(int n){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			b[j][n - i - 1] = a[i][j];
		}
	}
	out(n);
}
void ni(int n){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			b[n - j - 1][i] = a[i][j];
		}
	}
	out(n);
}
void half(int n){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			b[n - i - 1][n - j - 1] = a[i][j];
		}
	}
	out(n);
}
void no(int n){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			b[i][j] = a[i][j];
		}
	}
	out(n);
}

int main(){
	int n;
	cin >> n;
	int min = 10000000;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
			if(a[i][j] < min){
				min = a[i][j];
			}
		}
	}
	
	if(a[0][0] == min){
		no(n);
	}else if(a[0][n - 1] == min){
		ni(n);
	}else if(a[n - 1][0] == min){
		shun(n);
	}else{
		half(n);
	}

	return 0;
}

