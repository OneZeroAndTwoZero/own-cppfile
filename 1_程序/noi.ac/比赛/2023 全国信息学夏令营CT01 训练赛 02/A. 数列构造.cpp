#include<bits/stdc++.h>
using namespace std;

int n;
int a[200005] = {0};
int net[200005] = {0};
int pre[200005] = {0};
int ans[200005] = {0},pos = 0;
bool vis[200005] = {0};
priority_queue<int> q;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
		if(i != 0) net[a[i - 1]] = a[i];
		if(i != 0) pre[a[i]] = a[i - 1];
		if(i != n - 1) q.push(a[i]);
	}
	while(q.size()){
		int t = q.top();
		q.pop();
		if(!vis[t] && net[t] != 0){
			vis[t] = vis[net[t]] = 1;
			ans[pos ++] = t;
			ans[pos ++] = net[t];
			net[pre[t]] = net[net[t]];
			pre[net[net[t]]] = pre[t];
		}
	}
	for(int i = 0;i < n;i ++){
		printf("%d ",ans[i]);
	}

	return 0;
}