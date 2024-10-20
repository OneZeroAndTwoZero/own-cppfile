#include<bits/stdc++.h>
using namespace std;

int zhuan(string s){
	int ans = 0;
	for(int i = 0;i < s.size();i++){
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

int main(){
    string s;
    cin >> s;
    string y,m;
    if(s.size() == 6){
    	m = s.substr(4,2);
    	y = s.substr(0,4);
	}else{
    	m = s.substr(2,2);
    	y = s.substr(0,2);
    	if(zhuan(y) < 22){
    		y = "20" + y;
		}else{
			y = "19" + y;
		}
	}
	cout << y << "-" << m << endl;

	return 0;
}

