#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
int u,v;
int l,r;
int num = 0;
int d[400005] = {0};
vector<int> a[400005];
int fa[400005] = {0};
vector<int> son[400005];
int deepn[400005] = {0}; //它以及它的子树中,最深的未被覆盖到的重要城市
int ndeepy[400005] = {0}; //它以及它的子树中,最浅的降落地点
int deep[400005] = {0}; //一个节点本身的深度

void bud(int u,int de){
	deep[u] = de;
	for(auto && i : a[u]){
		if(i != fa[u]){
			fa[i] = u;
			son[u].push_back(i);
			bud(i,de + 1);
		}
	}
}

void dfs(int u,int x){
	if(d[u] == 1) deepn[u] = deep[u]; //本身就是重要城市
	for(auto && i : son[u]){
		dfs(i,x);
		//更新
		if(deepn[u] == 1919810) deepn[u] = deepn[i];
		else if(deepn[i] != 1919810) deepn[u] = max(deepn[u],deepn[i]);
		ndeepy[u] = min(ndeepy[u],ndeepy[i]);
	}
	//如果最浅的降落地点能覆盖到最深的未被覆盖的重要城市,就没必要加点了
	if(deepn[u] != 1919810 && ndeepy[u] + deepn[u] - 2 * deep[u] > x){
		if(u == 1){ //根节点特判,它不能等上面加点
			num ++;
		}else{
			if(deepn[u] - deep[u] >= x){ //不得不加了再加
				num ++;
				//更新
				deepn[u] = 1919810;
				ndeepy[u] = deep[u];
			}
		}
	}else{
		//更新
		deepn[u] = 1919810;
	}
}

bool check(int x){
	num = 0;
	for(int i = 0;i <= n;i ++){
		deepn[i] = ndeepy[i] = 1919810;
	}
	dfs(1,x);
	return num <= m;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d %d",&n,&m);
	l = 0,r = n;
	for(int i = 1;i <= n;i ++){
		scanf("%d",&d[i]);
	}
	for(int i = 1;i < n;i ++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	bud(1,1);
	//二分答案
	while(l <= r){
		int mid = (l + r) >> 1;
		if(check(mid)){
			ans = mid;
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	printf("%d\n",ans);

	return 0;
}