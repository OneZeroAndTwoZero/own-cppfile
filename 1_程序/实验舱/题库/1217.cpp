#include<bits/stdc++.h>
using namespace std;

int cz(string a,string b){
	int ans = 0;
	for(int i = 0;i < a.size();i++){
		for(int j = 0;j < b.size();j++){
			ans += (a[i] - '0') * (b[j] - '0');
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string a,b;
		cin >> a >> b;
		cout << cz(a,b) << endl;
	}

	return 0;
}

