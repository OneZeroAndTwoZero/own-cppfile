#include<bits/stdc++.h>
using namespace std;

stack<double> a;
string c[10000],s;
double t,n1,n2,ans;
int pos = 0;

int main(){
	while(cin >> c[pos]){
		pos ++;
	}
	for(int i = pos - 1;i >= 0;i --){
		s = c[i];
	    if(s != "+" && s != "-" && s != "*" && s != "/"){
			sscanf(s.c_str(),"%lf",&t);
			a.push(t);
		}else{
			n1 = a.top();
			a.pop();
			n2 = a.top();
			a.pop();
			if(s == "+") ans = n1 + n2;
			if(s == "-") ans = n1 - n2;
			if(s == "*") ans = n1 * n2;
			if(s == "/") ans = n1 / n2;
			a.push(ans);
		}
	}
	ans = a.top();
	printf("%.4lf\n",ans);

	return 0;
}

