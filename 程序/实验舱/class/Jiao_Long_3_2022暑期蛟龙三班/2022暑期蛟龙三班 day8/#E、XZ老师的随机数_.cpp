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
	cout << a.size() << endl;
	set<int> :: iterator it;
	for(it = a.begin();it != a.end();it ++){
		cout << *it << " ";
	}

	return 0;
}

