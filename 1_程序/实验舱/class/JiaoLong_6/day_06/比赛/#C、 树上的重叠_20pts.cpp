#include<bits/stdc++.h>
using namespace std;

int n,q;
int v,x,y,z;
vector<int> a[100005];
int fa[100005];
int h[100005];
int st[100005][25];

void erg(int u,int dep){
	// cout << u << "[][]\n";
    h[u] = dep;
    st[u][0] = fa[u];
    // cout << u << " " << st[u][0] << "\n";
    for(int i = 1;i <= __lg(dep) + 1;i ++){
        st[u][i] = st[st[u][i - 1]][i - 1];
    }
    for(auto && i : a[u]){
		if(fa[u] == i) continue;
		fa[i] = u;
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
	// cout << x << " " << y << " " << lca << " " << h[x] << " " << h[y] << " " << h[lca] << "\n";
	return h[x] + h[y] - 2 * h[lca] + 1;
}

int operate(){
	int lcaxy,lcaxz,lcayz;
	lcaxy = getlca(x,y);
	lcaxz = getlca(x,z);
	lcayz = getlca(y,z);
	int xyzy = 0,xzyz = 0,yxzx = 0;
	if(lcaxy == x && lcayz == y || lcaxy == y && lcayz == z){
		xyzy = 1;
	}else if(lcaxy == x && lcayz == z || lcaxy == y && lcayz == y){
		xyzy = min(len(x,y),len(y,z));
	}else if(lcaxy == y && lcayz != z || lcaxy != x && lcayz == y){
		xyzy = 1;
	}else{
		xyzy = len(lcaxz,y);
	}

	if(lcayz == y && lcaxz == z || lcayz == z && lcaxz == x){
		xzyz = 1;
	}else if(lcayz == y && lcaxz == x || lcayz == z && lcaxz == z){
		xzyz = min(len(x,z),len(y,z));
	}else if(lcayz == z && lcaxz != x || lcayz != y && lcaxz == z){
		xzyz = 1;
	}else{
		xzyz = len(lcaxy,z);
	}

	if(lcaxy == x && lcaxz == z || lcaxy == y && lcaxz == x){
		yxzx = 1;
	}else if(lcaxy == y && lcaxz == z || lcaxy == x && lcaxz == x){
		yxzx = min(len(x,y),len(x,z));
	}else if(lcaxy == x && lcaxz != z || lcaxy != y && lcaxz == x){
		yxzx = 1;
	}else{
		yxzx = len(lcayz,x);
	}

	// cout << yxzx << " " << xyzy << " " << xzyz << ";;\n";
	return max({xyzy,xzyz,yxzx});
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d %d",&n,&q);
	for(int i = 2;i <= n;i ++){
		scanf("%d",&v);
		a[v].push_back(i);
		a[i].push_back(v);
	}
	erg(1,1);
	while(q --){
		scanf("%d %d %d",&x,&y,&z);
		printf("%d\n",operate());
	}

	return 0;
}