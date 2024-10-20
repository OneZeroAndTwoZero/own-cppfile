#include<bits/stdc++.h>
using namespace std;

int n;
int u,v;
vector<int> a[100005];
int d[100005] = {0};
int f[100005] = {0};
int check[100005] = {0};

void bfs(){
	queue<int> q;
	q.push(1);
	while(q.size()){
		int t = q.front();
		q.pop();
		for(auto && i : a[t]){
			d[i] = d[t] + 1;
			q.push(i);
		}
	}
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	while(~scanf("%d",&n)){
		for(int i = 0;i <= n;i ++){
			a[i].clear();
			d[i] = check[i] = f[i] = 0;
		}
		for(int i = 1;i < n;i ++){
			scanf("%d %d",&u,&v);
			a[u].push_back(v);
            f[v] = u;
		}
		bfs();
		for(int i = 0;i < n;i ++){
			scanf("%d",&check[i]);
		}
        queue<int> q;
        q.push(1);
		bool ans = 0;
		for(int i = 1;i < n;i ++){
            q.push(check[i]);
			if(d[check[i]] < d[check[i - 1]]){
				ans = 1;
				break;
			}
            while(q.size() && f[check[i]] != q.front()){
                q.pop();
            }
            if(!q.size()){
                ans = 1;
                break;
            }
		}
		if(ans) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}