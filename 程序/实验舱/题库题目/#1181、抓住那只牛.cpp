#include<bits/stdc++.h>
using namespace std;

int n,k;
queue<int> q;
int ans[100005] = {0};
bool vis[100005];

void bfs(){
	q.push(n);
	vis[n] = 1;
	while(q.size()){
		int u = q.front();
		q.pop();
		if(u - 1 >= 0 && !vis[u - 1]){
			q.push(u - 1);
			vis[u - 1] = 1;
			ans[u - 1] = ans[u] + 1;
		}
		if(u + 1 <= 100000 && !vis[u + 1]){
			q.push(u + 1);
			vis[u + 1] = 1;
			ans[u + 1] = ans[u] + 1;
		}
		if(u * 2 <= 100000 && !vis[u * 2]){
			q.push(u * 2);
			vis[u * 2] = 1;
			ans[u * 2] = ans[u] + 1;
		}
	}
}

int main(){
	cin >> n >> k;
	bfs();
	cout << ans[k] << endl;

	return 0;
}

