#include<bits/stdc++.h>
using namespace std;

int main(){
	int check;
	cin >> check;
	int n = 10;
	int d = 3;
	int ans = 0;
	while(1){
		if(n == check){
			cout << ans << endl;
			return 0;
		}
		n --,ans ++;
		if(d == 1 || d == 2) n += 7;
		d = d % 7 + 1;
	}

	return 0;
}

