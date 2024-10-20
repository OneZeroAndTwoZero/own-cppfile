#include<bits/stdc++.h>
using namespace std;

bool cz(string a,string b,int n){
	string check = "";
	for(int i = n;i - n < a.size();i++){
		check = check + a[i % a.size()];
	}
	if(b.find(check,0) != b.npos){
		return 1;
	}
	return 0;
}

int main(){
	string a,b;
	getline(cin,b);
	getline(cin,a);
	for(int i = 0;i < a.size();i++){
		if(cz(a,b,i)){
			cout << "yes" << endl;
			return 0;
		}
	}
	cout << "no" << endl;

	return 0;
}

