#include<bits/stdc++.h>
using namespace std;

stack<long long> a;

long long zhuan(string s){
	long long ans = 0;
	for(int i = 0;i < s.size();i++){
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

int main(){
	string t;
	while(cin >> t){
		if(t != "+" && t != "-" && t != "*"){
			int num = zhuan(t);
			a.push(num);
		}else{
			int num1 = a.top();
			a.pop();
			int num2 = a.top();
			a.pop();
			if(t == "+"){
				a.push(num2 + num1);
			}else if(t == "-"){
				a.push(num2 - num1);
			}else{
				a.push(num2 * num1);
			}
		}
	}
	long long ans = a.top();
	cout << ans << endl;

	return 0;
}

