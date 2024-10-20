#include<bits/stdc++.h>
using namespace std;

char p1[13] = {'2','3','4','5','6','7','8','9','0','J','Q','K','A'};
char p2[4] = {'D','C','H','S'};

struct pu{
	int shu;
	int hua;
	char o1,o2;
	bool operator <(const pu &a) const{
		if(shu != a.shu) return shu < a.shu;
		return hua < a.hua;
	}
};

pu chai(string s){
	pu re;
	if(s.size() == 3){
		re.shu = 8;
		re.o1 = '0';
	}else{
		char tem = s[0];
		re.o1 = tem;
		for(int i = 0;i < 13;i++){
			if(p1[i] == tem){
				re.shu = i;
				break;
			}
		}
	}
	char tem2 = s[s.size() - 1];
	re.o2 = tem2;
	for(int i = 0;i < 4;i++){
		if(tem2 == p2[i]){
			re.hua = i;
			break;
		}
	}
	return re;
}

pu p[1002];

int main(){
	int n;
	cin >> n;
	getchar();
	string s;
	for(int i = 0;i < n;i++){
		getline(cin,s);
		pu r = chai(s);
		swap(r,p[i]);
	}
	sort(p,p + n);
	for(int i = 0;i < n;i++){
		if(p[i].o1 == '0'){
			cout << "10";
		}else{
		    cout << p[i].o1;
	    }
		cout << p[i].o2 << endl;
	}

	return 0;
}

