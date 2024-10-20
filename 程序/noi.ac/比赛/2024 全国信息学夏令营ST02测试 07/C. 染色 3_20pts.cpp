#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int x, y;
};

int n;
node a[200005];
string ans = "";

bool check(){
	unordered_map<int, int> fx, fy;
	for (int i = 0; i < n; i ++){
		if (ans[i] == 'r'){
			fx[a[i].x] ++, fy[a[i].y] ++;
		}else{
			fx[a[i].x] --, fy[a[i].y] --;
		}
	}
	for (auto && i : fx){
		if (abs(i.second) > 1) return 0;
	}
	for (auto && i : fy){
		if (abs(i.second) > 1) return 0;
	}
	return 1;
}

void dfs(int k){
	if (k == n){
		if (check()){
			cout << ans << "\n";
			exit(0);
		}
		return;
	}
	ans.push_back('r');
	dfs(k + 1);
	ans.pop_back();
	ans.push_back('b');
	dfs(k + 1);
	ans.pop_back();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> a[i].x >> a[i].y;
	}
	dfs(0);

    return 0;
}
