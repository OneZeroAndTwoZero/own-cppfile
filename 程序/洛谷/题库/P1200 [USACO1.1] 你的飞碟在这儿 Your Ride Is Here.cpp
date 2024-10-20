#include<bits/stdc++.h>
using namespace std;

string a,b;
int m = 47;

int cz(string s){
	int re = 1;
	for(int i = 0;i < s.size();i ++){
		re *= (s[i] - 'A' + 1);
		re %= m;
	}
	return re;
}

int main(){
	cin >> a >> b;
	if(cz(a) == cz(b)){
		cout << "GO";
	}else{
		cout << "STAY" << endl;
	}

	return 0;
}

