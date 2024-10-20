#include<bits/stdc++.h>
using namespace std;

int main(){
	int lx = 1,k;
	char lx_c = '.';
	string s;
	getline(cin,s);
	cin >> k;
	for(int i = 0;s[i] != '.' && i < s.size();i++){
		if(s[i] == lx_c){
			lx++;
			if(lx == k){
				if(i != s.size() - 2){
					if(s[i + 1] != s[i]){
						cout << lx_c << endl;
						return 0;
					}else{
						lx = -12123;
					}
			    }else{
			    	cout << lx_c << endl;
						return 0;
				}
			}
		}else{
			lx_c = s[i];
			lx = 1;
		}
	}
	cout << "no\n";

	return 0;
}

