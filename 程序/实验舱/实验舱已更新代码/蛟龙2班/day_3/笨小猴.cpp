#include<bits/stdc++.h>
using namespace std;

bool ok(int a){
	bool r = 1;
	if(a < 2){
		r = !r;
	}
	for(int i = 2;i <= sqrt(a) && r;i++){
		if(a % i == 0){
			r = !r;
		}
	}
	if(r) return 1;
	return 0;
}

int cha(string s){
	int b[26] = {0};
	for(int i = 0;i < s.size();i++){
		b[s[i] - 'a']++;
	}
	int min = 6666666,max = b[0];
	for(int i = 0;i < 26;i++){
		if(b[i] != 0 && b[i] < min){
			min = b[i];
		}
		if(b[i] > max){
			max = b[i];
		}
	}
	int cha_ = max - min;
	return cha_;
}

int main(){
	string s;
	getline(cin,s);
	int cha_ = cha(s);
	if(ok(cha_)){
		cout << "Lucky Word" << endl;
		cout << cha_ << endl;
	}else{
		cout << "No Answer" << endl;
		cout << "0" << endl;
	}
	
	return 0;
}
