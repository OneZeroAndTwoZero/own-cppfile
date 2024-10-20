#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 1;i < m;i++){
		n = (n + 1) % 7;
	}
	if(n == 7) n = 0;
	string day[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	cout << day[n] << endl;

	return 0;
}

