#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100005] = {0};

int main(){
	cin >> n >> m;
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

