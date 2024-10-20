#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,coin;
	int sum = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> coin;
		sum += coin / 2;
		sum += coin % 2;
	}
	cout << sum << endl;

	return 0;
}

