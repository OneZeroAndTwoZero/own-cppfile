#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 1;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		sum += (tem - 1);
	}
	cout << sum << endl;

	return 0;
}

