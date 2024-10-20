#include<bits/stdc++.h>
using namespace std;

int main(){
	int max = -1;
	string s;
	string max_s;
	getline(cin,s);
	s = s + " ";
	string tem = "";
	for(int i = 0;i < s.size();i++){
		if(s[i] == ' ' || s[i] == ','){
			if(tem.size() > max_s.size()){
				max_s = tem;
				max = tem.size();
			}
			tem = "";
		}else{
			tem += s[i];
		}
	}
	cout << max_s << endl << max << endl;

	return 0;
}

