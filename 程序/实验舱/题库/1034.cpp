#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};

int sl(int n){
	if(n == 1 || n == 2) return 1;
	if(a[n] != 0) return a[n];
	a[n] = (sl(n - 1) + sl(n - 2)) % 1000;
	return a[n];
} 

int main(){
	a[1] = 1,a[2] = 1;
	int n;
	cin >> n;
	int tem;
	for(int i = 0;i < n;i++){
		cin >> tem;
		cout << sl(tem) << endl;
	}

	return 0;
}

