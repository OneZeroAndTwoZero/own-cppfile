#include<bits/stdc++.h>
using namespace std;

int n;
int a[1001][1001] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	int max = -114514;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			if(i == j || i + j == n - 1){
				if(a[i][j] > max){
					max = a[i][j];
				}
			}
		}
	}
	cout << max << endl;

	return 0;
}

