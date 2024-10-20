#include<bits/stdc++.h>
using namespace std;

set<int> name;
int cnt[100005] = {0};
int a[1000005] = {0};
int n,m,l = 1,r = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&a[i]);
	}
	cnt[a[l]] ++;
	for(l = 1;l <= n;l ++){
		while(name.size() < m && r <= n){
			if(cnt[++ r] == 0){
				name.insert(a[r]);
			}
			cnt[a[r]] ++;
		}
		if(name.size() == m){
			printf("%d %d\n",l,r);
			return 0;
		}
		cnt[a[l]] --;
		if(!cnt[a[l]]) name.erase(a[l]);
	}

	return 0;
}