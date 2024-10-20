#include<bits/stdc++.h>
using namespace std;

int a[1001] = {0}; 

int main(){
	cout << log2(1000000000) << endl;
	int n = 11;
	long long ans = 1;
	for(int i = n;i > 0;i--){
		ans *= n;
	}
	cout << ans << endl;
	for(int i = 0;i < 100;i++){
		for(int j = i + 1;j < 100;j++){
			if((pow(j,2) - pow(i,2)) <= 1000){
				int t = pow(j,2) - pow(i,2);
				a[t] = 1;
			}
		}
	}
	for(int i = 0;i <= 1000;i++){
		if(!a[i]){
			cout << i << ":::" << endl;
		}
	}

	return 0;
}

