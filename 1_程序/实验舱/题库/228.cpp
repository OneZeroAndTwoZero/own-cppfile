#include<bits/stdc++.h>
using namespace std;

bool ok(string a,string b,int t){
	for(int i = t;i < a.size() + t;i++){
		if(a[i % a.size()] != b[i - t]){
			return 0;
		}
	}
	return 1;
}

int main(){
	string a,b;
	cin >> a >> b;
	for(int i = 0;i < a.size();i++){
		if(ok(a,b,i)){
			cout << i << endl;
			return 0;
		}
	}
	cout << "-1" << endl;

	return 0;
}

