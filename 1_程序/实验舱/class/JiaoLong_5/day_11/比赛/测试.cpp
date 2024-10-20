#include<bits/stdc++.h>
using namespace std;

vector<int> a;

int main(){
	int n = 0;
	for(int i = 1;i <= 10;i ++){
		n = (n + 2) % i;
	}
	cout << n << endl;

	return 0;
}

