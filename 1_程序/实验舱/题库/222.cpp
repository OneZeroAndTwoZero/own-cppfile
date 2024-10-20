#include<bits/stdc++.h>
using namespace std;

int p[5] = {0};
string o = "ABCDE";

int main(){
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == 'A') p[0] ++;
		else if(s[i] == 'B') p[1] ++;
		else if(s[i] == 'C') p[2] ++;
		else if(s[i] == 'D') p[3] ++;
		else if(s[i] == 'E') p[4] ++;
	}
	int max = -1;
	for(int i = 0;i < 5;i++){
		if(p[i] > max) max = p[i];
	}
	if(max == 0){
		cout << "Nobody" << endl;
		return 0;
	}
	int max_i,max_n = 0;
	for(int i = 0;i < 5;i++){
		if(p[i] == max){
			max_i = i;
			max_n ++;
		}
	}
	if(max_n != 1){
		cout << "Nobody" << endl;
		return 0;
	}
	cout << o[max_i] << endl;
	

	return 0;
}

