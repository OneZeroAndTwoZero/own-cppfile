#include<bits/stdc++.h>
using namespace std;

int n;
int a[101][101] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			if(j == 0 || j == i){
				a[i][j] = 1;
				cout << a[i][j] << " ";
			}else{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}

