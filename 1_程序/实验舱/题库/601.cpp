#include<bits/stdc++.h>
using namespace std;

int b[26] = {0};

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || a % 2 == 0) return 0;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	string s;
	cin >> s;
	int max_ = -1,min_ = 10000;
	for(int i = 0;i < s.size();i++){
		b[s[i] - 'a'] ++;
		max_ = max(max_,b[s[i] - 'a']),min_ = min(min_,b[s[i] - 'a']);
	}
	int cha = max_ - min_;
	if(su(cha)){
		cout << "Lucky Word" << endl;
		cout << cha << endl;
	}else{
		cout << "No Answer" << endl;
		cout << "0" << endl;
	}

	return 0;
}

