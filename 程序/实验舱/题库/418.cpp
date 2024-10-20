#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,k;
	cin >> a >> b >> k;
	int a_i = 1,b_i = 1;
	for(int i = 0;i < k;i++){
		cout << a_i << " " << b_i << endl;
		a_i = (a_i) % a + 1;
		b_i = (b_i) % b + 1;
	}

	return 0;
}

