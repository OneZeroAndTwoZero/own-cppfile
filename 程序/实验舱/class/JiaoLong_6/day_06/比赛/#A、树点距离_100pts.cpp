#include<bits/stdc++.h>
using namespace std;

int n,k,c,s;
int fa[200005];
int h[200005];
int st[200005][25];
vector<int> a[200005];
vector<int> color[200005];
int maxdep[200005],maxpos[200005];

void erg(int u,int dep){
    h[u] = dep;
    st[u][0] = fa[u];
    // cout << u << " " << st[u][0] << "\n";
    for(int i = 1;i <= __lg(dep) + 1;i ++){
        st[u][i] = st[st[u][i - 1]][i - 1];
    }
    for(auto && i : a[u]){
        erg(i,dep + 1);
    }
}

int getlca(int x,int y){
    if(h[x] < h[y]) swap(x,y);
    while(h[x] > h[y]){
        x = st[x][__lg(h[x] - h[y])];
    }
    if(x == y) return x;
    for(int i = __lg(h[x]) + 1;i >= 0;i --){
        if(st[x][i] != st[y][i]){
            x = st[x][i];
            y = st[y][i];
        }
    }
    return st[x][0];
}

int len(int x,int y){
    int lca = getlca(x,y);
    // cout << x << " " << y << " " << lca << ";;\n";
    return h[x] + h[y] - 2 * h[lca];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d",&c,&fa[i]);
        color[c].push_back(i);
        if(fa[i] == 0) s = i;
        else a[fa[i]].push_back(i);
    }
    erg(s,1);
    for(int i = 1;i <= k;i ++){
		for(int j = 0;j < color[i].size();j ++){
			if(h[color[i][j]] > maxdep[i]){
				maxdep[i] = h[color[i][j]];
				maxpos[i] = color[i][j];
			}
		}
	}
    for(int i = 1;i <= k;i ++){
        int cnt = 0;
        for(int x = 0;x < color[i].size();x ++){
			// cout << i << " " << color[i][x] << " " << color[i][y] << "\n";
			cnt = max(cnt,len(color[i][x],maxpos[i]));
        }
        printf("%d\n",cnt);
    }

	return 0;
}
