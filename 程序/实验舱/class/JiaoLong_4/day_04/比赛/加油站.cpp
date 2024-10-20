#include<bits/stdc++.h>
using namespace std;

struct zhan{
	int di,wi;
};

int n,ans;
int now;
long long z;
long long p,l;
zhan a[500005] = {0};

bool cmp(zhan k,zhan b){
	return k.di < b.di;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].di,&a[i].wi);
	}
	scanf("%d %d",&p,&l);
	for(int i = 0;i < n;i++){
		a[i].di = p - a[i].di;
	}
	sort(a,a + n,cmp);
	now = 0,z = 0;
	ans = 0;
	while(z + l < p){
		int zd = -1,zd_n;
		int t = z + l;
		while(now < n && a[now].di <= t){
			if(a[now].wi > zd){
				zd = a[now].wi;
				zd_n = now;
			}
			now ++;
		}
		if(zd == -1){
			cout << -1 << endl;
			return 0;
		}
		now = zd_n + 1;
		l += a[zd_n].wi;
		l -= a[zd_n].di - z;
		z = a[zd_n].di;
		
		ans ++;
	}
	cout << ans << endl;

	return 0;
}

