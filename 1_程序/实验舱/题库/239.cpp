#include<bits/stdc++.h>
using namespace std;

int main(){
	long long H;
	long long a,b,c;
	cin >> H >> a >> b >> c;
	long long cs = 0;
	long long z = a + b + c;
	cs += (H / z) * 3;
	H %= z;
	if(H > 0){
		if(H - a > 0) cs += 2;
		else cs++;
	}
	cout << cs << endl;

	return 0;
}

