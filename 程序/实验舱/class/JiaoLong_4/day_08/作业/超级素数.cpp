#include<bits/stdc++.h>
using namespace std;

set<int> ans;
int n;

bool ok(int a){
	if(a == 2 || a == 5) return 1;
	if(a % 2 == 0 || a % 5 == 0 || a < 2) return 0;
	int c = sqrt(a);
	for(int i = 2;i <= c;i ++){
		if(a % i == 0) return 0;
	}
	return 1;
}

void dfs(int num){
	if(num > n || !ok(num)) return;
	ans.insert(num);
	for(int i = 1;i < 10;i++){
		dfs(num * 10 + i);
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < 10;i++) dfs(i);
	set<int> :: iterator it;
	printf("%d\n",ans.size());
	for(it = ans.begin();it != ans.end();it ++){
		printf("%d\n",*it);
	}

	return 0;
}

