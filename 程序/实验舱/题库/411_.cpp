#include<bits/stdc++.h>
using namespace std;

map<int,bool> a;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		a[t] = !a[t];
	}
	map<int,bool> :: iterator it;
	for(it = a.begin();it != a.end();it ++){
		if(it -> second == 1){
			cout << it -> first << endl;
			return 0;
		}
	}

	return 0;
}

