#include<bits/stdc++.h>
using namespace std;

int jiancha(string s){
	int zong = 0;
	for(int i = 0,j = 1;i <= 10;i++,j++){
		zong += j * (s[i] - '0');
		if(i == 0 || i == 4) i++;
	}
	int right = zong % 11;
	return right;
}

int main(){
	int check;
	string s;
	cin >> s;
	check = s[12] == 'X' ? 10 : s[12] - '0';
	int right = jiancha(s);
	if(right == check){
		cout << "Right" << endl;
	}else{
		s[12] = right == 10 ? 'X' : (char)(right + '0');
		cout << s << endl;
	}

	return 0;
}

