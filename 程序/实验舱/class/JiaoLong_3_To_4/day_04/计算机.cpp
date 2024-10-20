#include<bits/stdc++.h>
using namespace std;

int jinzhi = 10;
long long ans = 0;
string num;
string cz;
int yunsuanfu = -1;

long long zhuan(string s){
	long long tem = 0;
	int dq;
	for(int i = 0;i < s.size();i++){
		if(s[i] >= '0' && s[i] <= '9'){
			dq = s[i] - '0';
		}else{
			dq = s[i] - 'A' + 10;
		}
		tem = tem * jinzhi + dq;
	}
	return tem;
}

void zhuan2(long long a){
	if(a == 0){
		cout << "0" << endl;
		return;
	}
	string s;
	int tem_;
	while(a > 0){
		tem_ = a % jinzhi;
		if(tem_ < 10){
			//s.insert(s.begin(),char(tem_ + '0'));
			s = char(tem_ + '0') + s;
		}else{
			//s.insert(s.begin(),char(tem_ - 10 + 'A'));
			s = char(tem_ - 10 + 'A') + s;
		}
		a /= jinzhi;
	}
	cout << s << endl;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> cz;
		if(cz == "CLEAR"){
			ans = 0;
		}else if(cz == "EQUAL"){
			zhuan2(ans);
		}else if(cz == "CHANGE"){
			int j_;
			cin >> j_;
			jinzhi = j_;
		}
		if(cz == "NUM"){
			cin >> num;
			long long ten_num = zhuan(num);
			if(yunsuanfu == 1){
				ans += ten_num;
			}else if(yunsuanfu == 2){
				ans -= ten_num;
			}else if(yunsuanfu == 3){
				ans *= ten_num;
			}else if(yunsuanfu == 4){
				ans /= ten_num;
			}else if(yunsuanfu == 5){
				ans %= ten_num;
			}else{
				ans = ten_num;
			}
			yunsuanfu = -1;
		}
		if(cz == "ADD"){
			yunsuanfu = 1;
		}else if(cz == "SUB"){
			yunsuanfu = 2;
		}else if(cz == "MUL"){
			yunsuanfu = 3;
		}else if(cz == "DIV"){
			yunsuanfu = 4;
		}else if(cz == "MOD"){
			yunsuanfu = 5;
		}
	}

	return 0;
}

