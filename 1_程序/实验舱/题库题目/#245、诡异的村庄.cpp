#include<bits/stdc++.h>
using namespace std;

int t,n,m;
int u,v;
vector<int> a[100005];
int d[100005] = {0};

void pai(){
	queue<int> q;
	for(int i = 1;i <= n;i ++){
		if(!d[i]){
			q.push(i);
		}
	}
	while(q.size()){
		int k = q.front();
		q.pop();
		for(auto && i : a[k]){
			d[i] --;
			if(!d[i]) q.push(i);
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		for(int i = 0;i <= n;i ++){
			a[i].clear();
			d[i] = 0;
		}
		while(m --){
			scanf("%d %d",&u,&v);
			d[v] ++;
			a[u].push_back(v);
		}
		pai();
		bool pd = 1;
		for(int i = 0;i <= n;i ++){
			if(d[i]){
				pd = 0;
				printf("1\n");
				break;
			}
		}
		if(pd){
			printf("0\n");
		}
	}

	return 0;
}
