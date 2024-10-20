#include<bits/stdc++.h>
using namespace std;

int ws(int a){
	if(!a) return 1;
	int ans = 0;
	while(a){
		ans ++;
		a /= 10;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		bool p = 1;
		for(int i = 0;i <= 10;i++){
			long long tem = n * n * i;
			int check = tem % (long long)pow(10,ws(n));
			if(check == n){
				p = 0;
				cout << i << " " << tem << endl;
				break;
			}
		}
		if(p){
			cout << "No" << endl;
		}
	}

	return 0;
}

