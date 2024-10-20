#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1;
int a[300005] = {0};
long long c[300005] = {0};
long long ans = 0;

bool cmp(int a,int b){
	return c[a] > c[b];
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i <= m;i ++){
		scanf("%lld",&c[i]);
	}
	sort(a + 1,a + n + 1,cmp);
	for(int i = 1;i <= n;i ++){
		if(a[i] >= pos && c[a[i]] > c[pos] && pos <= m){
			ans += c[pos ++];
		}else{
			ans += c[a[i]];
		}
	}
	printf("%lld\n",ans);

	return 0;
}