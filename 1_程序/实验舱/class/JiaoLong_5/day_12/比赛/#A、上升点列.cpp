#include<bits/stdc++.h>
using namespace std;

struct dian{
	int xi,yi;
};
struct tem{
	int xi,yi,si;
};

dian a[1005];
tem b[1005];
int pos = 0;
int dir[2][2] = {{0,1},{1,0}};
int check[1005] = {0};
int n,k,ans = 0;

bool s(int x,int y){
	for(int i = 0;i < n;i ++){
		if(a[i].xi == x && a[i].yi == y) return 1;
	}
	return 0;
}
int zhao(int x,int y){
	for(int i = 0;i < pos;i ++){
		if(b[i].xi == x && b[i].yi == y && b[i].si != 0) return b[i].si;
	}
	return 0;
}

int dfs(int x,int y){
	int cnt = zhao(x,y);
	if(cnt != 0) return cnt;
	for(int i = 0;i < 2;i ++){
		int tx = x + dir[i][0],ty = y + dir[i][1];
		if(s(tx,ty)){
			cnt = max(cnt,dfs(tx,ty));
		}
	}
	b[pos].xi = x,b[pos].yi = y,b[pos ++].si = cnt + 1;
	return cnt + 1;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].xi,&a[i].yi);
	}
	for(int i = 0;i < n;i ++){
		ans = max(dfs(a[i].xi,a[i].yi),ans);
	}
	printf("%d\n",ans);

	return 0;
}
