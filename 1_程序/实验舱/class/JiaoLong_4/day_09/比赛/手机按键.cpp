#include<bits/stdc++.h>
using namespace std;

int num[10] = {0,0,3,3,3,3,3,4,3,4};
char a[10][4] = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
string s;
char ans[15];

void dfs(int k){
	if(k == s.size()){
		for(int i = 0;i < k;i++){
			printf("%c",ans[i]);
		}
		puts("");
		return;
	}
	for(int i = a[s[k] - '0'][0];i <= a[s[k] - '0'][num[s[k] - '0'] - 1];i ++){
		ans[k] = (char)i;
		dfs(k + 1);
	}
}

int main(){
	cin >> s;
	dfs(0);

	return 0;
}

