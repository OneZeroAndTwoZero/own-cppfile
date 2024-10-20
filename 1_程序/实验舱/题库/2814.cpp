#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int zd = -1;
	for(int i = 0;i < n;i++){
		int a,b;
		cin >> a >> b;
		zd = max(zd,a + b);
	}
	cout << zd << endl;

	return 0;
}

