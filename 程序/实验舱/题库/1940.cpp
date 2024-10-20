#include<bits/stdc++.h>
using namespace std;

int ok(string s){
	int f = 0,l = s.size() - 1;
	int gs = 0;
	while(1){
		if(s[f] != s[l]) gs ++;
		if(f >= l){
		    return gs;
		}
		f ++,l --;
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		int check = ok(s);
		if(check == 1 || check == 0 && s.size() % 2 == 1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

