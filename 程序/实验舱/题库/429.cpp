#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum = 0;
	cin >> n;
	for(int i = 2;i <= n/2;i++){
		if(n % i == 0){
			sum += i;
		}
	}
	cout << sum << endl;

	return 0;
}

