#include<bits/stdc++.h>
using namespace std;

int main(){
	char a,cz;
	int n;
	cin >> a >> cz >> n;
	if(cz != '+' && cz != '-'){
		cout << "DATA ERROR" << endl;
		return 0;
	}
	char ans;
	if(cz == '+'){
		ans = (char)(a + n);
	}else{
		ans = (char)(a - n);
	}
	cout << ans << endl;

	return 0;
}

