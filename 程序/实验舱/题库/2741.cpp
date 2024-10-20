#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		int need = k - a[i];
		for(int j = 0;j < n;j++){
			if(j != i && a[j] == need){
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;

	return 0;
}

