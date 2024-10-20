#include<bits/stdc++.h>
using namespace std;

map<int,bool> w;

int main(){
	int n;
	cin >> n;
	while(n --){
		string op;
		cin >> op;
		if(op == "New"){
			int k = 1;
			while(w[k] != 0){
				k ++;
			}
			cout << k << endl;
			w[k] = 1;
		}else{
			int od;
			cin >> od;
			if(w[od]){
				w[od] = 0;
				cout << "Successful" << endl;
			}else{
				cout << "Failed" << endl;
			}
		}
	}

	return 0;
}

