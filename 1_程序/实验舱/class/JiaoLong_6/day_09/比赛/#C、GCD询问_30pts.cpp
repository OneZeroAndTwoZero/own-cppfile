#include<bits/stdc++.h>
#define getans(l,r) gcd(st[l][__lg(r - l + 1)],st[r - (1 << __lg(r - l + 1)) + 1][__lg(r - l + 1)])
using namespace std;

int n,q;
int l,r;
int a[100005];
int st[100005][25];
unordered_map<int,long long> f;

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
		st[i][0] = a[i];
	}
	for(int j = 1;j <= 25;j ++){
		for(int i = 1;i + (1 << j) - 1 <= n;i ++){	
			st[i][j] = gcd(st[i][j - 1],st[i + (1 << (j - 1))][j - 1]);
		}
	}
	for(int i = 1;i <= n;i ++){
		for(int j = i;j <= n;j ++){
			f[getans(i,j)] ++;
		}
	}
	while(q --){
		scanf("%d %d",&l,&r);
		printf("%d ",getans(l,r));
		printf("%lld\n",f[getans(l,r)]);
	}

    return 0;
}
