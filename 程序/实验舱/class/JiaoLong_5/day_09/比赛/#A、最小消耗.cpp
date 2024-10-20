#include<bits/stdc++.h>
using namespace std;

struct bian{
	int u,v,w;
	bool operator < (const bian &a){
		return w < a.w;
	}
};

bian e[600005];
int pos = 0;
int a[605][605] = {0},f[600005] = {0};
int n,ans = 0;

int zhuan(int x,int y){
	return x * n + y;
}

int find(int x){
	if(f[x] == x) return x;
	f[x] = find(f[x]);
	return f[x];
}

void he(int x,int y){
	f[find(x)] = find(y);
}

int main(){
	for(int i = 0;i <= 300000;i++) f[i] = i;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(i + 1 <= n){
				e[pos].u = zhuan(i,j);
				e[pos].v = zhuan(i + 1,j);
				e[pos].w = abs(a[i][j] - a[i + 1][j]);
				pos ++;
			}
			if(j + 1 <= n){
				e[pos].u = zhuan(i,j);
				e[pos].v = zhuan(i,j + 1);
				e[pos].w = abs(a[i][j] - a[i][j + 1]);
				pos ++;
			}
		}
	}
	
	sort(e,e + pos);
	for(int i = 0;i < pos;i ++){
		if(find(zhuan(1,1)) == find(zhuan(n,n))) break;
		he(e[i].u,e[i].v);
		ans = max(ans,e[i].w);
	}
	printf("%d\n",ans);

	return 0;
}

