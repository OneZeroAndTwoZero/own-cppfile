#include<bits/stdc++.h>
using namespace std;

struct zhan{
	int di,wi;
};

int n,ans;
int now;
long long need;
long long p,l;
zhan a[500005] = {0};

bool cmp(zhan k,zhan b){
	return k.wi > b.wi;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].di,&a[i].wi);
	}
	scanf("%d %d",&p,&l);
	sort(a,a + n,cmp);
	need = p;
	ans = 0;
	while(need - l > 0){
		bool p = 0;
		for(int i = 0;i < n;i++){
			if(a[i].di < need && a[i].di >= need - l){
			    p = 1;
			    l -= need - a[i].di;
			    need = a[i].di;
			    l += a[i].wi;
			    ans ++;
			    break;
			}
		}
		if(!p){
			cout << -1 << endl;
			return 0;
		}
	}
	cout << ans << endl;

	return 0;
}

