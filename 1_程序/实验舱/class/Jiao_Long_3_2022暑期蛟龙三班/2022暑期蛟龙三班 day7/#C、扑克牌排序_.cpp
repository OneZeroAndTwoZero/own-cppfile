#include<bits/stdc++.h>
using namespace std;

struct pu{
	string c;
	int shu;
	int hua;
	bool operator <(const pu &a) const{
		if(shu != a.shu) return shu < a.shu;
		return hua < a.hua;
	}
};

pu chai(string s){
	
}

int n;
pu p[1002];

int main(){
	cin >> n;
	string s;
	for(int i = 0;i < n;i++){
		cin >> s;
		p[i].c = s;
		char c1 = s[0];
		if(c1 >= '2' && c1 <= '9') p[i].shu = c1 - '0';
		else if (c1 == 'J') p[i].shu = 11;
		else if (c1 == 'Q') p[i].shu = 12;
		else if (c1 == 'K') p[i].shu = 13;
		else if (c1 == 'A') p[i].shu = 14;
		else p[i].shu = 10;
		char c2 = s[s.size() - 1];
		if(c2 == 'D') p[i].hua  =1;
		else if (c2 == 'C') p[i].hua = 2;
		else if (c2 == 'H') p[i].hua = 3;
		else p[i].hua = 4;
	}
	sort(p,p + n);
	for(int i = 0;i < n;i++){
		cout << p[i].c << endl;
	}

	return 0;
}

