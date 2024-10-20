#include<bits/stdc++.h>
using namespace std;

int a[3] = {0};

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> a[0] >> a[1] >> a[2];
		sort(a,a + 3);
		if(a[0] + a[1] <= a[2]){
			cout << (a[2] - a[0] - a[1]) + 1 << endl;
		}else{
			cout << 0 << endl;
		}
	}

	return 0;
}

