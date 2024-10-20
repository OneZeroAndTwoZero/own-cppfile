#include<bits/stdc++.h>
using namespace std;

set<int> a;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		a.insert(tem);
	}
	for(int i = 0;i < m;i++){
		int tem;
		cin >> tem;
		a.insert(tem);
	}
	
	set<int> :: iterator it;
	for(it = a.begin();it != a.end();it++){
		cout << *it << " ";
	}

	return 0;
}

