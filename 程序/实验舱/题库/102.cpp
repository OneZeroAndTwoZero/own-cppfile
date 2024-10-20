#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,step = 0;
	cin >> n;
	while(step <= 1000){
		if(n == 1){
			cout << step << endl;
			return 0;
		}
		if(n % 2 == 0){
			n /= 2;
			step++;
		}else{
			n = n * 3 + 1;
			step++;
		}
	}
	cout << "No" << endl;
	
	return 0;
}
