#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,b;
	cin >> n >> b;
	int sum = 0;
	for(int i = 1;i <= n;i++){
		if(i % b == 0) sum ++;
	}
	cout << sum << endl;

	return 0;
}

