#include<bits/stdc++.h>
using namespace std;

int a[105] = {0};

void pai(int n){
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n - i - 1;j++){
			if(a[j] > a[j + 1]){
				swap(a[j],a[j + 1]);
			}
			for(int k = 0;k < n;k++){
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	pai(n);

	return 0;
}

