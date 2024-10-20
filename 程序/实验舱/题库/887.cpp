#include<bits/stdc++.h>
using namespace std;

string a[100005];

bool qz(string k,string t){
	if(t.size() > k.size()) return 0;
	string check = k.substr(0,t.size());
	if(check == t) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	string k;
	cin >> k;
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		if(qz(a[i],k)){
			cout << a[i] << endl;
		}
	}

	return 0;
}

