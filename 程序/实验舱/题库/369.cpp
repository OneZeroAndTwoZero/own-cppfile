#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int pos = a.find(b,0);
	int pos_ = pos + b.size() - 1;
	for(int i = 0;i < a.size();i++){
		if(i < pos && i > pos_){
			cout << a[i];
		}
	}

	return 0;
}

