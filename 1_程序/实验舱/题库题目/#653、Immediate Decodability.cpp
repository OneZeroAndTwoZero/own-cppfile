#include<bits/stdc++.h>
using namespace std;

string s;
unordered_map<string,int> zhao1,zhao2;

int main(){
	for(int T = 1;;T ++){
		zhao1.clear(),zhao2.clear();
		bool ans = 1;
		while(1){
			cin >> s;
			if(s == "9") break;
			if(zhao1[s]) ans = 0;
			string tem = "";
			for(int j = 0;j < s.size();j++){
				tem = tem + s[j];
				if(zhao2[tem]) ans = 0;
				zhao1[tem] = 1;
			}
			zhao2[s] = 1;
		}
		if(ans){
			cout << "Set " << T << " is immediately decodable" << endl;
		}else{
			cout << "Set " << T << " is not immediately decodable" << endl;
		}
	}

	return 0;
}

