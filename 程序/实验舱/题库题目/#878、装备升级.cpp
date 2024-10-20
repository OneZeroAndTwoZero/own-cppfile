#include<bits/stdc++.h>
using namespace std;

char s[500005];

int main(){
	cin >> s;
	int n = strlen(s);
	if(n == 1){
		cout << "Best" << endl;
		return 0;
	}
	bool o = 0;
	for(int i = 1;i < n;i++){
		if(s[i] > s[i - 1]) o = 1;
	}
	if(!o){
		cout << "Best" << endl;
		return 0;
	}
	next_permutation(s,s + n);
	cout << s << endl;

	return 0;
}

