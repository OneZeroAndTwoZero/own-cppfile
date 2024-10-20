#include<bits/stdc++.h>
using namespace std;

int main(){
	string name;
	getline(cin,name);
	while(1){
		string mm;
		cin >> mm;
		if(mm == "123456"){
			cout << "Hello " << name << endl;
			return 0;
		}else{
			if(mm == "0"){
				return 0;
			}
			cout << "Wrong Password!" << endl;
		}
	}

	return 0;
}

