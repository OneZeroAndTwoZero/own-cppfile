#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

int main(){
	a[0] = 2,a[1] = 0,a[2] = 2,a[3] = 2;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		if(i >= 4){
			a[i] = (a[i - 4] + a[i - 3] + a[i - 2] + a[i - 1]) % 10;
		}
		cout << a[i];
	}

	return 0;
}

