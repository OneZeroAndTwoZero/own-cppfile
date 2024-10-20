#include<bits/stdc++.h>
using namespace std;

map<string,string> ci;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s1,s2;
		cin >> s1 >> s2;
		ci[s1] = s2;
	}
//	string ss;
//	getline(cin,ss);
//	string ans;
//	getline(cin,ans);
//	ans = ans + " ";
//	int i = 0;
//	while(i < ans.size() - 1){
//		int pos = ans.find(" ",i);
//		string tem;
//		for(int j = i,k = 0;j < pos;j++){
//			tem[k] = ans[j];
//		}
//		if(ci[tem] != ""){//!="";
//			cout << ci[tem];
//		}else{
//			cout << tem;
//		}
//		i = pos;
//		while(ans[i] == ' ' || i < ans.size() - 1){
//			cout << " ";
//			i ++;
//		}
//	}
    string ans;
    while(cin >> ans){
    	if(ci[ans] != ""){
    		cout << ci[ans] << " ";
		}else{
			cout << ans << " ";
		}
	}

	return 0;
}

