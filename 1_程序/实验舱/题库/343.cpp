#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum = 2;
	int n1,n2,n3;
	cin >> n1 >> n2;
	while(n1 >= n2){
		n3 = n1 - n2;
		sum ++;
		n1 = n2;
		n2 = n3;
	}
	cout << sum << endl;

	return 0;
}

