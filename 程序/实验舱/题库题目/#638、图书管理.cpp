#include<bits/stdc++.h>
using namespace std;

int n;
string op,od;
map<string,int> b;

int main(){
	cin >> n;
	while(n --){
		cin >> op;
		getline(cin,od);
		if(op == "add"){
			b[od] = 1;
		}else{
			if(b[od]){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}
	}

	return 0;
}

