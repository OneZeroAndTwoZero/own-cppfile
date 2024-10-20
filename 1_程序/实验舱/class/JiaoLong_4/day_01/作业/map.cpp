#include<bits/stdc++.h>
using namespace std;

map<string,int> a;
int n;
string s,check,tem;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> s;
		tem = "";
		for(int i = 0;i < s.size();i++){
			tem = tem + s[i];
			a[tem] ++;
		}
	}
	cin >> check;
	tem = "";
	for(int i = 0;i < check.size();i++){
		tem = tem + check[i];
		printf("%d\n",a[tem]);
	}

	return 0;
}

