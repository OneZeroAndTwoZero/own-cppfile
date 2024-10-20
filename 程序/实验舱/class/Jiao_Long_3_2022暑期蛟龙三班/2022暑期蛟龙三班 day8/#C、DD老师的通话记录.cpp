#include<bits/stdc++.h>
using namespace std;

map<long long,int> a;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		long long s;
		cin >> s;
		a[s] ++;
	}
	
	map<long long,int> :: iterator it;
	for(it = a.begin();it != a.end();it++){
		cout << it -> first << " " << it -> second << endl;
	}

	return 0;
}

