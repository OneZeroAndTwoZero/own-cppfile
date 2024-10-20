#include<bits/stdc++.h>
using namespace std;

int ws(int a){
	if(a == 0) return 1;
	int ans = 0;
	while(a){
		ans ++;
		a /= 10;
	}
	return ans;
}

bool ok(int a){
	if(a >= 0 && a <= 9){
		return 1;
	}
	int pd = ws(a);
	if(a % pd != 0) return 0;
	return ok(a / 10);
}

int main(){
	int k;
	cin >> k;
	for(int i = 0;i < k;i++){
		int tem;
		cin >> tem;
		if(ok(tem)){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

	return 0;
}

