#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
	cin >> n >> s;
	for(int i = 1;i <= n;i++){
		bool ok = 1;
		for(int j = 0;j + i - 1 < n;j++){
			if(s.find(s.substr(j,i),j + 1) != s.npos){
				ok = 0;
				break;
			}
		}
		if(ok){
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

