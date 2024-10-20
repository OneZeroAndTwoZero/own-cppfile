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
	char what;
	cin >> what;
	string s;
	getline(cin,s);
	getline(cin,s);
	if(what == 'C'){
		for(int i = 0;i < s.size();i++){
			char check = s[i];
			int num = 0;
			for(int j = i;j < s.size();j++){
				if(s[j] == check) num ++,i ++;
				else break;
			}
			i --;
			if(num > 1){
				cout << num;
			}
			cout << check;
		}
    }else{
    	for(int i = 0;i < s.size();i++){
    		if(s[i] >= '0' && s[i] <= '9'){
    			string s_ = "";
    			while(s[i] >= '0' && s[i] <= '9'){
    				s_ = s_ + s[i];
    				i++;
				}
				int cs = zhuan(s_);
    			for(int j = 0;j < cs;j++){
    				cout << s[i];
				}
			}else{
				cout << s[i];
			}
		}
	}

	return 0;
}

