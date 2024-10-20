#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	a %= s.size();
	b %= 2;
	for(int i = 0;i < a;i++){
		for(int j = s.size() - 2;j >= 0;j--){
			swap(s[j],s[j + 1]);
		}
	}
	if(b){
		reverse(s.begin(),s.end());
	}
	cout << s << endl;

	return 0;
}

