#include<bits/stdc++.h>
using namespace std;

int a[1002] = {0};

int main(){
	int n,x;
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i = n - 1;i >= 0;i--){
		if(a[i] == x){
			cout << n - i << endl;
			return 0;
		}
	}

	return 0;
}


