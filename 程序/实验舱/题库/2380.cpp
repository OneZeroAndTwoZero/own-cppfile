#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};

int main(){
	a[0] = 1,a[1] = 2;
	for(int i = 2;i < 1000001;i++){
		a[i] = (a[i - 1] + a[i - 2]) % 3;
	}
	int n;
	while(cin >> n){
		if(!a[n]){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}

	return 0;
}

