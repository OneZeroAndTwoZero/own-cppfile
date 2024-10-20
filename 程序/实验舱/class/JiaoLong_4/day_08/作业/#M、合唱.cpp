#include<bits/stdc++.h>
using namespace std;

int n,k,h,ans = -1;
int a[205] = {0},val[205] = {0};

void dfs(int k_,int num,int check,int hmax,int hmin){
	if(k_ == n){
		if(num >= k && hmax - hmin <= h){
			ans = max(ans,check / num);
			cout << num << ";;;" << check << endl;
		}
		return;
	}
	if(hmax - hmin > h) return;
	dfs(k_ + 1,num + 1,check + val[k],max(hmax,a[k]),min(hmin,a[k]));
	dfs(k_ + 1,num,check,hmax,hmin);
}

int main(){
	scanf("%d %d %d",&n,&k,&h);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&val[i]);
	}
	dfs(0,0,0,-1,100000000);
	printf("%d\n",ans);

	return 0;
}

