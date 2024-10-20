#include<bits/stdc++.h>
using namespace std;

char t;
stack<char> ok;

int main(){
	while(cin >> t){
		if(t == '@') break;
		if(t == '(') ok.push(t);
		if(t == ')'){
			if(ok.size() > 0){
				ok.pop();
			}else{
				puts("NO");
				return 0;
			}
		}
	}
	if(ok.size()){
		puts("NO");
	}else{
		puts("YES");
	}

	return 0;
}

