#include<bits/stdc++.h>
using namespace std;

int quan[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char huan[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int sl = 0;

bool ok(string s){
	int tem = 0;
	for(int i = 0;i < 17;i++){
		tem += (int)(s[i] - 48) * quan[i];
	}
	tem %= 11;
	if(s[17] == huan[tem]) return 1;
	sl ++;
	return 0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		if(!ok(s)){
			cout << s << endl;
		}
	}
	if(sl == 0){
		cout << "All passed" << endl;
	}

	return 0;
}


