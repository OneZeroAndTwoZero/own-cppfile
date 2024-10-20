#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int ans = 1;
	int sd = 0;
	int ysx = 0;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '('){
			sd += 1;
			ysx ++;
		}else{
			if(ysx){
				ysx --;
			}else{
				ans *= sd;
				sd -= 1;
			}
		}
	}
	cout << ans << endl;

	return 0;
}

