#include<bits/stdc++.h>
using namespace std;

map<string,string> zhao;

int main(){
	int n;
	cin >> n;
	while(n --){
		string op;
		cin >> op;
		if(op == "N"){
			string od,mm;
			cin >> od >> mm;
			if(zhao[od] == ""){
				cout << "New: OK" << endl;
				zhao[od] = mm;
			}else{
				cout << "ERROR: Exist" << endl;
			} 
		}else{
			string od,mm;
			cin >> od >> mm;
			if(zhao[od] == mm){
				cout << "Login: OK" << endl;
			}else if(zhao[od] == ""){
				cout << "ERROR: Not Exist" << endl;
			}else{
				cout << "ERROR: Wrong PW" << endl;
			}
		}
	}

	return 0;
}

