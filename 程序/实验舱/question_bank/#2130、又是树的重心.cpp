#include<bits/stdc++.h>
using namespace std;

int n,u,v,ans = 1;
int size[100005];
int fa[100005];
vector<int> a[100005];

int erg(int x){
	size[x] = 1;
	for(auto && i : a[x]){
		if(i == fa[x]) continue;
		fa[i] = x;
		size[x] += erg(i);
	}
	return size[x];
}

int getnum(int x){
	int res = 0,sum = 1;
	for(auto && i : a[x]){
		if(i == fa[x]) continue;
		res = max(res,size[i]);
		sum += size[i];
	}
	res = max(n - sum,res);
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 1;i < n;i ++){
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	erg(1);
	while(1){
		bool p = 0;
		// 包含父节点
		for(auto && i : a[ans]){
			if(getnum(i) < getnum(ans)){
				p = 1,ans = i;
				break;
			}
		}
		if(p == 0) break;
	}
	printf("%d\n",getnum(ans));

	return 0;
}