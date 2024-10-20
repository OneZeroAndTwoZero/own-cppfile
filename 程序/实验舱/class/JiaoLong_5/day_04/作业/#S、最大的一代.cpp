#include<bits/stdc++.h>
using namespace std;

int n,m,id,k,x,max_,maxi;
vector<int> a[105];
int ans[105] = {0},d[105] = {0};

void dfs(int v){
	ans[d[v]] ++;
	for(auto &&i : a[v]){
		d[i] = d[v] + 1;
		dfs(i);
	}
}

int main(){
	cin >> n >> m;
	d[1] = 1;
	for(int i = 0;i < m;i++){
		cin >> id >> k;
		while(k --){
			cin >> x;
			a[id].push_back(x);
		}
	}
	dfs(1);
	for(int i = 1;i <= 103;i++){
		if(ans[i] > max_){
			max_ = ans[i];
			maxi = i;
		}
	}
	cout << max_ << " " << maxi << endl;

	return 0;
}

