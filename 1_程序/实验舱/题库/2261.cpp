#include<bits/stdc++.h>
using namespace std;

long long ss[2000005] = {0};
long long y = 1;

bool su(long long n){
	if(n == 2){
		return 1;
	}
	if(n < 2 || n % 2 == 0) return 0;
	long long i = 0;
	while(ss[i] != 0 && ss[i] * ss[i] <= n){
		if(n % ss[i] == 0) return 0;
		i++;
	}
	ss[y ++] = n;
	return 1;
}

long long zhuan(string s){
	long long ans = 0;
	for(int i = 0;i < s.size();i++){
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

bool ok(string s,int i,int k){
	string check = s.substr(i,k);
	long long num = zhuan(check);
	if(su(num)) return 1;
	return 0;
}

int main(){
	ss[0] = 2;
	int l,k;
	cin >> l >> k;
	string s;
	cin >> s;
	for(int i = 0;i < 10000000000;i ++){
		su(i);
	}
	for(int i = 0;i + k - 1 < s.size();i++){
		if(ok(s,i,k)){
			cout << s.substr(i,k) << endl;
			return 0;
		}
	}
	cout << "404" << endl;
	
	return 0;
}

