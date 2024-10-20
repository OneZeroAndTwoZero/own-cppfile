#include<bits/stdc++.h>
using namespace std;

int n,pos = 0,ans;
int a[1000005];
unordered_map<int,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i ++){
		while(pos < n && !f[a[pos]]){
			f[a[pos]] ++;
			pos ++;
		}
		ans = max(ans,pos - i);
		f[a[i]] --;
	}
	printf("%d\n",ans);

	return 0;
}