#include<bits/stdc++.h>
using namespace std;

string a,b;

int main(){
	cin >> a >> b;
	int len1 = a.size(),len2 = b.size();
	string s,s_;
	int len;
	if(len1 >= len2) s = a + a,s_ = b + b,len = len2;
	else s = b + b,s_ = a + a,len = len1;
	int max = 0;
	for(int i = 1;i <= len;i++){
		for(int j = 0;j < len;j++){
			string s__ = s_.substr(j,i);
			if(s.find(s__,0) < 511){
				max = i;
			}
		}
	}
	cout << max << endl;

	return 0;
}

