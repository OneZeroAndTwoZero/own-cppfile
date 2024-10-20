#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[n * m] = {0};
	for(int i = 0;i < n * m;i++){
		cin >> a[i];
	}
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cout << a[i + m * j] << " "; 
		}
		cout << endl;
	}

	return 0;
}

