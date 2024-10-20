#include<bits/stdc++.h>
using namespace std;

string ans = "";
int n;

void dfs(int k,int numl,int numr){
	if(k == 2 * n){
		cout << ans << endl;
		return;
	}
	if(numl < n){
		ans[k] = '(';
		dfs(k + 1,numl + 1,numr);
	}
	if(numr < numl){
		ans[k] = ')';
		dfs(k + 1,numl,numr + 1);
	}
}

int main(){
	cin >> n;
	for(int i = 0;i < 2 * n;i++) ans = ans + "0";
	dfs(0,0,0);

	return 0;
}

