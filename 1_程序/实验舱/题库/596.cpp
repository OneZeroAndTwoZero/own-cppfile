#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int cj = 0;
	for(int i = 0;i < n;i++){
		if(a[a[i] - 1] == i + 1){
			cj ++;
		}
	}
	cj /= 2;
	cout << cj << endl;

	return 0;
}

