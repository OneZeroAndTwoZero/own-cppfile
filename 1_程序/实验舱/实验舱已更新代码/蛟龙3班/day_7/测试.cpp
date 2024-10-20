#include<bits/stdc++.h>
using namespace std;

vector<int> a(4,2);

int main(){
	a[3] = 3;
	a.erase(2);
	cout << a[2];

	return 0;
}

