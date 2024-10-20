#include<bits/stdc++.h>
using namespace std;

long long nto(string s,int r){
	long long ans = 0;
	for(int i = 0;i < s.size();i++){
		ans *= r;
		if(s[i] >= '0' && s[i] <= '9') ans += s[i] - 48;
		else ans += s[i] - 'A' + 10;
	}
	return ans;
}

string ton(long long a,int r){
	string ans = "";
	char n;
	while(a){
		if(a % r < 10){
			n = a % r + '0';
		}else{
			n = a % r - 10 + 'A';
		}
		ans = n + ans;
		a /= r;
    }
	return ans;
}

int main(){
	int n;
	long long a,b;
	string s1,s2;
	cin >> n;
	cin >> s1 >> s2;
	a = nto(s1,n);
	b = nto(s2,n);
	long long he = a + b;
	string ans = ton(he,n);
	cout << ans << endl;

	return 0;
}

