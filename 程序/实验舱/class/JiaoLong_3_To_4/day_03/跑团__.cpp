#include<bits/stdc++.h>
using namespace std;

string s,t;
int max_ = 0,min_ = 0;
int fh = 1;
map<int,int> cnt;

void cz(string s){
	if(s.empty()){
		return;
	}
	if(s.find("d") == s.npos){
		int tem;
		sscanf(s.c_str(),"%d",&tem);
		max_ += fh * tem;
		min_ += fh * tem;
		return;
	}
	if(s[0] == 'd'){
		s = "1" + s;
	}
	int tem1,tem2;
	sscanf(s.c_str(),"%dd%d",&tem1,&tem2);
	if(fh == 1){
		max_ += tem1 * tem2;
		min_ += tem1;
	}else{
		min_ -= tem1 * tem2;
		max_ -= tem1;
	}
	cnt[tem2] += tem1;
} 

int main(){
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s[i] == '+' || s[i] == '-'){
			cz(t),t = "",fh = s[i] == '+' ? 1 : -1;
		}else{
			t.push_back(s[i]);
		}
	}
	cz(t);
	map<int,int> :: iterator it;
	for(it = cnt.begin();it != cnt.end();it++){
		printf("%d %d\n",it -> first,it -> second);
	}
//	for(auto i : cnt){
//		printf("%d %d\n",i.first,i.second);
//	}
	printf("%d %d\n",min_,max_);

	return 0;
}

