#include<bits/stdc++.h>
using namespace std;

stack<char> a;
char c;

void out(){
	if(!a.size()) return;
	char ch = a.top();
	a.pop();
	out();
	printf("%c",ch);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	while(~scanf("%c",&c)){
		if(c == '@' && !a.empty()){
			a.pop();
		}else if(c == '#'){
			while(a.size()) a.pop();
		}else{
			a.push(c);
		}
	}
	out();

	return 0;
}

