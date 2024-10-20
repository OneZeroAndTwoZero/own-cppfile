#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		a[t] ++;
	}
	for(int i = 0;i < 100000;i ++){
		if(i % 2 == 1 && a[i] % 2 == 1){
			cout << i << endl;
		}
	}

	return 0;
}

