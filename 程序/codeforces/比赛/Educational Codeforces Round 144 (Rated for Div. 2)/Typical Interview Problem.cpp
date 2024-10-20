#include<bits/stdc++.h>
using namespace std;

int t,n;
bool ans;
string s,check;

void ok(int a){
	for(int now = 0;now < 100;a ++){
		if(a % 3 == 0 && a % 5 == 0){
			check = check + "FB";
			now += 2;
		}else if(a % 3 == 0){
			check = check + "F";
			now ++;
		}else if(a % 5  == 0){
			check = check + "B";
			now ++;
		}
		a ++;
	}
}

int main(){
	cin >> t;
	ok(1);
	while(t --){
		cin >> n;
		cin >> s;
		ans = 0;
		if(check.find(s,0) != check.npos) ans = 1;
		if(ans){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}

	return 0;
}

