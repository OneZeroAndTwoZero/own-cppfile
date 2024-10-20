#include<bits/stdc++.h>
using namespace std;

string zhuan(int a){
	if(a == 0) return "0";
	string ans = "";
	while(a){
		char n = a % 10 + '0';
		ans = n + ans;
		a /= 10;
	}
	return ans;
}

bool ok(int a){
	if(a % 4 == 0) return 1;
	if(a % 7 == 0) return 1;
	string tem = zhuan(a);
	if(tem.find("44",0) != tem.npos) return 1;
	if(tem.find("77",0) != tem.npos) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1;i <= n;i++){
		if(ok(i)) sum ++;
	}
	cout << sum << endl;

	return 0;
}

