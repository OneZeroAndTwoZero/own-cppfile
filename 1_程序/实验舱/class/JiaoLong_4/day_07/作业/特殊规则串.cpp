#include<bits/stdc++.h>
using namespace std;

int n;
string s;

bool ok(string t){
	if(t == "A") return 1;
	if(t.size() <= 1) return 0;
	if(t[0] == 'B' && t[t.size() - 1] == 'S' && ok(t.substr(1,t.size() - 2))) return 1;
	if(t.find("N",0) != t.npos){
		int pos = t.find("N",0);
		if(ok(t.substr(0,pos)) && ok(t.substr(pos + 1,t.size() - pos - 1))) return 1;
	}
	return 0;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> s;
		if(ok(s)){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}

