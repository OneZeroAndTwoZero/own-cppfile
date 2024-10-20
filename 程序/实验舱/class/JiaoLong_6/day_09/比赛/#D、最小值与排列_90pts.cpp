#include<bits/stdc++.h>
using namespace std;

int n,pos = 1;
int a[1000005];
int st[1000005][22];
int ans[1000005];

int getmin(int l,int r){
	if(a[st[l][__lg(r - l + 1)]] < a[st[r - (1 << __lg(r - l + 1)) + 1][__lg(r - l + 1)]]){
		return st[l][__lg(r - l + 1)];
	}else{
		return st[r - (1 << __lg(r - l + 1)) + 1][__lg(r - l + 1)];
	}
	return -1;
}

void build(int l,int r){
	if(l > r) return;
	int mid = getmin(l,r);
	ans[mid] = pos ++;
	build(l,mid - 1);
	build(mid + 1,r);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
		st[i][0] = i;
	}
	for(int j = 1;j < 22;j ++){
		for(int i = 1;i + (1 << j) - 1 <= n;i ++){
			if(a[st[i][j - 1]] < a[st[i + (1 << (j - 1))][j - 1]]){
				st[i][j] = st[i][j - 1];
			}else{
				st[i][j] = st[i + (1 << (j - 1))][j - 1];
			}
			// cout << i << " " << j << " " << st[i][j] << ";;\n";
		}
	}
	build(1,n);
	for(int i = 1;i <= n;i ++){
		printf("%d%c",ans[i]," \n"[i == n]);
	}
    
    return 0;
}
