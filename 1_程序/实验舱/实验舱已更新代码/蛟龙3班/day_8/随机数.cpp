#include<bits/stdc++.h>
using namespace std;

set<int> a;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		a.insert(tem);
	}
	
	for(auto i : a){
		cout << i << endl;
	}

	return 0;
}

