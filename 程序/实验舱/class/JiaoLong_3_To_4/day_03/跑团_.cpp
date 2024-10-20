#include<bits/stdc++.h>
using namespace std;

string s;
int max_ = 0,min_ = 0;
map<int,int> a;

int zhuan(string tem){
	int s_ = 0;
	for(int i = 0;i < tem.size();i++){
		s_ *= 10;
		s_ += (tem[i] - '0');
	}
	return s_;
}

void cz(string tem,int pos){
	char fh;
	if(pos == -1){
		fh == '+';
	}else{
		fh == s[pos];
	}
	if(tem.find("d",0) != tem.npos){
		int zhi = zhuan(tem);
		max_ += zhi,min_ += zhi;
	}else{
		int wz = tem.find("d",0);
		int num = zhuan(tem.substr(pos + 1,tem.find("d",0)));
		int mian = zhuan(tem.substr(tem.find("d",0) + 1,tem.size() - tem.find("d",0) - 1));
		cout << num << "\\\\\\" << mian << endl;
		a[mian] += num;
		if(fh == '-'){
			max_ -= num * 1,min_ -= num * mian;
		}else{
			max_ += num * mian,min_ += num * 1;
		}
	}
}

int main(){
	int pos = -1;
	getline(cin,s);
	string tem = "";
	for(int i = 0;;i++){
		if(s[i] == '+' || s[i] == '-'){
			cz(tem,pos);
			pos = i;
			tem = "";
		}else if(i == s.size()){
			cz(tem,pos);
			break;
		}else{
			tem += s[i];
		}
	}
	map<int,int>::iterator it;
	for(it = a.begin();it != a.end();it++){
		cout << it -> first << " " << it -> second << endl;
	}
	cout << min_ << " " << max_ << endl;

	return 0;
}


