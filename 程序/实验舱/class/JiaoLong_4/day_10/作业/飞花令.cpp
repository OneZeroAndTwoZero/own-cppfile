#include<bits/stdc++.h>
using namespace std;

bool p[100] = {0};
int n,pos = 0,rest;
string s,check;
queue<char> a1,a2;

int main(){
	scanf("%d",&n);
	rest = n;
	cin >> s >> check;
	for(int i = 0;i < s.size();i ++){
		if(s[i] != '.') a1.push(s[i]);
	}
	for(int i = 0;i < check.size();i++){
		a2.push(check[i]);
	}
	while(a1.size() && a2.size() && rest > 1){
		if(a2.front() == '#' || a1.front() != a2.front()){
			a2.pop();
			p[pos] = 1;
			rest --;
		}else{
			a1.pop(),a2.pop();
		}
		pos = (pos + 1) % n;
		for(int i = 0;i < 6;i++){
			if(p[pos] == 1) pos = (pos + 1) % n;
		}
	}
	for(int i = 0;i < n;i++){
		if(!p[i]){
			printf("%c\n",'A' + i);
		}
	}

	return 0;
}

