#include<bits/stdc++.h>
using namespace std;

string zhuan_b(int a,int b){
	string ans = "";
	if(!a) return "0";
	while(a){
		int now = a % b;
		if(now >= 10){
			ans = (char)('A' + now - 10) + ans;
		}else{
			ans = (char)('0' + now) + ans;
		}
		a /= b;
	}
	return ans;
}

bool ok_b(int a,int b){
	a = a * a;
	string check = zhuan_b(a,b);
	int f = 0,l = check.size() - 1;
	while(f <= l){
		if(check[f] != check[l]) return 0;
		f ++,l --;
	}
	return 1;
}

int main(){
	int b;
	cin >> b;
	for(int i = 1;i <= 300;i++){
		if(ok_b(i,b)){
			cout << zhuan_b(i,b) << " " << zhuan_b(i * i,b) << endl;
		}
	}

	return 0;
}

