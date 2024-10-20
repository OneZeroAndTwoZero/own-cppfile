#include<bits/stdc++.h>
using namespace std;

int t,n;
string s;
unordered_map<string,int> zhao1,zhao2;

int main(){
	cin >> t;
	while(t --){
		cin >> n;
		zhao1.clear(),zhao2.clear();
		bool ans = 1;
		for(int i = 0;i < n;i++){
			cin >> s;
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
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

