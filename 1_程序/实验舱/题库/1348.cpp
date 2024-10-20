#include<bits/stdc++.h>
using namespace std;

int zhuan(string s){
	int ans = 0;
	int fh = 1;
	int i = 0;
	if(s[0] == '-'){
		fh = -1;
		i ++;
	}
	for(i = i;i < s.size();i++){
		ans = ans * 10 + (s[i] - '0');
	}
	ans = ans * fh;
	return ans;
}

int main(){
	int n;
	cin >> n;
	int gs = 0;
	for(int i = 0;i < n;i++){
		char tem1,tem2;
		int num1,num2,check;
		string ans;
		cin >> num1 >> tem1 >> num2 >> tem2;
		cin >> ans;
		if(ans.find("?",0) != ans.npos) continue;
		check = zhuan(ans);
		if(tem1 == '-'){
		    if(num1 - num2 == check) gs ++;
		}else{
			if(num1 + num2 == check) gs ++;
		}
	}
	cout << gs << endl;

	return 0;
}

