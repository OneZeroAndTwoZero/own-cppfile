#include<bits/stdc++.h>
using namespace std;

struct nod{
	int z;
	int id;
};

long long t = 0,ans;
long long sum[200005] = {0};
nod a[200005] = {0};
int tem[200005] = {0};
unordered_map<int,int> zhao;
int n,q,u,v;

bool cmp(nod a,nod b){
	return a.z < b.z;
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i].z);
		a[i].id = i;
	}
	sort(a + 1,a + n + 1,cmp);
	for(int i = n;i >= 1;i--){
		zhao[a[i].id] = i;
		sum[i] = sum[i + 1] + a[i].z;
		tem[i] = a[i].z;
		t += (long long)a[i].z * i;
	}
	scanf("%d",&q);
	while(q --){
		scanf("%d %d",&u,&v);
		u = zhao[u];
		ans = t - sum[u + 1] - a[u].z * u;
		int pos = lower_bound(tem + 1,tem + n + 1,v) - tem;
		if(a[u].z < v) pos --;
		ans += pos * v;
		if(pos < u) ans = ans - a[u].z + sum[pos];
		else ans += sum[pos + 1];
		printf("%lld\n",ans);
	}

	return 0;
}

