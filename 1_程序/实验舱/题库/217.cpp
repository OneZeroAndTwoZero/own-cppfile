#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,z = 0,a;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		z = z ^ a;
	}
	cout << z << endl;

	return 0;
}

