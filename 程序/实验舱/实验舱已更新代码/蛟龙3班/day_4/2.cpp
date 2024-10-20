#include<bits/stdc++.h>
using namespace std;

void totwo(long long x){
	if(x == 0) return;
	totwo(x / 2);
	cout << x % 2;
}

int main(){
	int n;
	long long x;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x;
		if(x == 0){
			cout << 0 << endl;
		}else{
			totwo(x);
			cout << endl;
		}
	}

	return 0;
}

