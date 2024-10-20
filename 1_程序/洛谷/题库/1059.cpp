#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		a[t] ++;
	}
	int ans = 0;
	for(int i = 0;i < 10001;i++){
		if(a[i]){
			ans ++;
		}
	}
	cout << ans << endl;
	for(int i = 0;i < 10001;i++){
		if(a[i]){
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}

