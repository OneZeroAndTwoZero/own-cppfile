#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	long long di;
	long long z = min({a,b,c,d}),y = max({a,b,c,d});
	if(z == y){
		cout << 1 << endl;
		return 0;
	}else if(z == a){
		if(b < c){
			di = b - a + 1 + d - c + 1;
		}else{
			di = d - a + 1;
		}
	}else{
		if(d < a){
			di = d - c + 1 + b - a + 1;
		}else{
			di = b - c + 1;
		}
	}
	cout << di << endl;

	return 0;
}

