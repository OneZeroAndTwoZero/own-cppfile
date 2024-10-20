#include<bits/stdc++.h>
using namespace std;

map<string,int> zhao;

int main(){
	string op;
	while(cin >> op){
		if(op == "end") return 0;
		if(op == "find"){
			string od;
			cin >> od;
			if(zhao[od] == 0){
				cout << -1 << endl;
			}else{
				if(zhao[od] == 101) cout << 0 << endl;
				else cout << zhao[od] << endl;
			}
		}else{
			string od;
			int x;
			cin >> od >> x;
			x = max(x,zhao[od]);
			if(!x) x = 101;
			zhao[od] = x;
		}
	}

	return 0;
}

