#include<bits/stdc++.h>
using namespace std;

int jinzhi = 10; 

string zhuan2(long long a){
	if(a == 0){
		return "0";
	}
	string s;
	int tem_;
	char dq;
	while(a){
		tem_ = a % jinzhi;
		if(tem_ < 10){
			dq = tem_ + '0';
		}else{
			dq = tem_ - 10 + 'A';
		}
		s = dq + s;
		a /= jinzhi;
	}
	return s;
}

int main(){
	long long a;
	cin >> a >> jinzhi;
	cout << zhuan2(a);

	return 0;
}

