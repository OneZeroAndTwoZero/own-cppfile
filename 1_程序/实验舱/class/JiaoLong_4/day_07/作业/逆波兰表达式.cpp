#include<bits/stdc++.h>
using namespace std;

stack<int> a;
string s;
int t,n1,n2,ans;

int main(){
	while(cin >> s){
		if(s != "+" && s != "-" && s != "*" && s != "/"){
			sscanf(s.c_str(),"%d",&t);
			a.push(t);
		}else{
			n1 = a.top();
			a.pop();
			n2 = a.top();
			a.pop();
			if(s == "+") ans = n2 + n1;
			if(s == "-") ans = n2 - n1;
			if(s == "*") ans = n2 * n1;
			if(s == "/") ans = n2 / n1;
			a.push(ans);
		}
	}
	ans = a.top();
	printf("%d\n",ans);

	return 0;
}

