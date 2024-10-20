#include<bits/stdc++.h>
using namespace std;

int n,m,x,y;
int d[100005];
vector<int> a[100005];
priority_queue<int,vector<int>,greater<int> > q;

void tuopu(){
	for(int i = 1;i <= n;i++){
		if(!d[i]) q.push(i);
	}
	while(q.size()){
		int u = q.top();
		q.pop();
		printf("%d ",u);
		for(auto && i : a[u]){
			d[i] --;
			if(!d[i]){
				q.push(i);
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	while(m --){
		scanf("%d %d",&x,&y);
		a[x].push_back(y);
		d[y] ++;
	}
	tuopu();

	return 0;
}

