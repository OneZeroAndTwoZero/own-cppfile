#include<bits/stdc++.h>
using namespace std;

string one(string s,int d){
	if(s[s.find(".",0) + d + 1] < '5')
}

string she(int cz,string s,int d){
	string ans = "";
	if(s.find(".",0) == s.npos){
		ans = s + ".";
		for(int i = 0;i < d;i++){
			ans = ans + "0";
		}
	}else if(s.find(".",0) + d + 1 >= s.size()){
		int cha = s.find(".",0) + d + 1 - s.size()
		ans = s;
		while(cha --){
			ans = ans + "0";
		}
	}else{
		if(cz == 1){
			
		}else if(cz == 2){
			
		}else{
			
		}
	}
	return ans;
}

int main(){
	int n,d;
	cin >> n >> d;
	for(int i = 0;i < n;i ++){
		int cz;
		string sz;
		cin >> cz >> sz;
	}

	return 0;
}

