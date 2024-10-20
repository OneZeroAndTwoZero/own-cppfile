#include<bits/stdc++.h>
using namespace std;

int t,n,pos = 0,sum = 0,p;
int a[100];

bool dfs(int idx,int k,int b,int c){
	if(k > p || b > p || c > p) return 0;
	if(k== p && b == p && c == p) return 1;
	return dfs(idx + 1,k + a[idx],b,c) || dfs(idx + 1,k,b + a[idx],c) || dfs(idx + 1,k,b,c + a[idx]);
}

bool cmp(int a,int b){
	return a > b;
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d",&n);
		sum = 0,pos = 0;
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
			sum += a[i];
		}
		if(sum < 3 || sum != sum / 3 * 3){
			puts("no");
			continue;
		}
		p = sum / 3;
		sort(a,a + n,cmp);
		if(a[0] > p){
			puts("no");
			continue;
		}
		if(dfs(0,0,0,0)){
			puts("yes");
		}else{
			puts("no");
		}
	}

	return 0;
}

