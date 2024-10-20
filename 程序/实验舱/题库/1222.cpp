#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};

int main(){
	int n,m;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 0;i < n;i++){
		if(a[i] == m){
			cout << i + 1 << endl;
			return 0;
		}
	}

	return 0;
}

