#include<bits/stdc++.h>
using namespace std;

int s[10005] = {0},us[10005] = {0};

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || a % 2 == 0) return 0;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n,s_ = 0,us_ = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		if(su(tem)){
			s[s_ ++] = tem;
		}else{
			us[us_ ++] = tem;
		}
	}
	sort(s,s + s_);
	sort(us,us + us_);
	cout << s_ << endl;
	for(int i = 0;i < s_;i++){
		cout << s[i] << " ";
	}
	cout << endl;
	cout << us_ << endl;
	for(int i = 0;i < us_;i++){
		cout << us[i] << " ";
	}
	cout << endl;

	return 0;
}

