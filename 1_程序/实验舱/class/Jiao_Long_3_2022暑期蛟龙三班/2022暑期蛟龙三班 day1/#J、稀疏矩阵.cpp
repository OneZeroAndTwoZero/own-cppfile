#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
			if(a[i][j] != 0){
				cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
			}
		}
	}

	return 0;
}

