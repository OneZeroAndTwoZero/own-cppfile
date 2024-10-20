#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	s = s + "N";
	int i = 0,sum = 0;
	while(i < s.size() - 1){
		if(s[i] == 'Y'){
			int pos = s.find("N",i);
			int cd = pos - i;
			int sum_ = 0,now = 1;
			for(int j = 1;j <= cd;j++){
				sum_ += now;
				now ++;
				if(now > 5) now = 5;
			}
			sum += sum_;
			i = pos;
		}else{
			i ++;
		}
	}
	cout << sum << endl;

	return 0;
}

