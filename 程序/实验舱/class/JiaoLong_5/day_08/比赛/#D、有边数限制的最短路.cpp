#include<bits/stdc++.h>
using namespace std;

struct dian{
	int ui,wi;
};

int n,m,k;
int u,v,w;
vector<dian> a[1005];
bool vis[1005];
int dis[1005] = {0},st[1005] = {0};
queue<int> q;

void SPFA(int s){
    dis[s] = 0;
    st[s] = 0;
    q.push(s);
    while (q.size()){
        int u = q.front();
        q.pop();
        vis[u] = 0;
        if(st[u] < k){
	        for(auto && i : a[u]){
	            int v = i.ui,w = i.wi;
	            if (dis[v] > dis[u] + w){
	                dis[v] = dis[u] + w;
					st[v] = st[u] + 1;
	                if (!vis[v]){
						vis[v] = 1;
						q.push(v);
					}
	            }
	        }
	    }
    }
}

int main(){
	scanf("%d %d %d",&n,&m,&k);
	while(m --){
		scanf("%d %d %d",&u,&v,&w);
		a[u].push_back({v,w});
	}
	memset(dis, 0x3f, sizeof dis);
	SPFA(1);
	if(dis[n] >= 1000000){
		for(int i = n;i >= 1;i--){
			if(dis[i] < 1000000){
				printf("%d\n",i);
				break;
			}
		}
		printf("impossible\n");
	}else{
		printf("%d\n",dis[n]);
	}

	return 0;
}

