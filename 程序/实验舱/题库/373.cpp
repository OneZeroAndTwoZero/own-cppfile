#include<bits/stdc++.h>
using namespace std;

int cz(string s){
	int pos = 0;
	int ans = 0;
	while(pos < s.size()){
		if(s.find("sycoj",pos) == s.npos){
			break;
		}else{
			pos = s.find("sycoj",pos);
			bool ok = 1;
			if(pos != 0){
				if(s[pos - 1] != '.' && s[pos - 1] != ',' && s[pos - 1] != ' ') ok = 0;
			}
			if(pos + 4 != s.size() - 1){
				if(s[pos + 5] != '.' && s[pos + 5] != ',' && s[pos + 5] != ' ') ok = 0;
			}
			if(ok) ans ++;
			pos ++;
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		char t = getchar();
		getline(cin,s);
		for(int j = 0;j < s.size();j ++){
			if(s[j] == 'S') s[j] = 's';
		}
		int ji = cz(s);
		cout << ji << endl;
		if(ji == 0) cout << "wu gan" << endl;
		else if(ji <= 3) cout << "you ai" << endl;
		else cout << "zhen ai la" << endl;
	}

	return 0;
}

