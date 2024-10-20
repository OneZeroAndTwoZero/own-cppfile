#include<bits/stdc++.h>
using namespace std;

int main(){
	int now = 0,c = 0;
	for(int i = 0;i < 12;i++){
		now += 300;
		int a;
		cin >> a;
		now -= a;
		if(now < 0){
			cout << '-' << i + 1 << endl;
			return 0;
		}
		c += now / 100 * 100;
		now %= 100;
	}
	cout << now + c * 1.2 << endl;

	return 0;
}

