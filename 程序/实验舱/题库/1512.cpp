#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int c = 0;
	while(n != 1){
		if(n % 2 == 0){
			n /= 2;
			c ++;
		}else{
			n = (3 * n + 1) / 2;
			c++;
		}
	}
	cout << c << endl;

	return 0;
}

