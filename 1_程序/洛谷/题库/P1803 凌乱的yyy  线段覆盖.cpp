#include<bits/stdc++.h>
using namespace std;

struct node{
	int ai,bi;
	bool operator < (const node &a) const{
		return bi < a.bi;
	}
};

int n,ans = 0,now = -10000;
node a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&a[i].ai,&a[i].bi);
	}
	sort(a,a + n);
	for(int i = 0;i < n;i ++){
		if(a[i].ai >= now){
			now = a[i].bi;
			ans ++;
		}
	}
	printf("%d\n",ans);

	return 0;
}

