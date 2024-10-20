#include<bits/stdc++.h>
using namespace std;

int n,t;
char tem;
int n1,n2,ans;
char op;
stack<int> a;
stack<char> y;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&t);
		a.push(t);
	}
	for(int i = 0;i < n - 1;i++){
		cin >> tem;
		y.push(tem);
	}
	while(a.size() > 1){
		op = y.top();
		y.pop();
		n1 = a.top();
		a.pop();
		n2 = a.top();
		a.pop();
		if(op == '/' && !n1){
			printf("ERROR: %d/0\n",n2);
			return 0;
		}
		if(op == '+') ans = n2 + n1;
		if(op == '-') ans = n2 - n1;
		if(op == '*') ans = n2 * n1;
		if(op == '/') ans = n2 / n1;
		a.push(ans);
	}
	ans = a.top();
	printf("%d\n",ans);

	return 0;
}

