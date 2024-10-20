#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	n %= 1000;
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i ++){
		if(s[i] == 'a'){
			n = (n * k) % 1000;
		}else if(s[i] == 'b'){
			n = (n + k) % 1000;
		}else if(s[i] == 'c'){
			n = abs(n - k);
		}else{
			n = n / k;
		}
	}
	cout << n << endl;

	return 0;
}

