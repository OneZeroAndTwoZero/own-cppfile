#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100005];
vector<int> d;
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    sort(a,a + n);
    for(int i = 1;i < n;i ++)
        d.push_back(a[i] - a[i - 1]);
    sort(d.begin(),d.end());
    for(int i = 0;i < k;i ++) ans += d[i];
    printf("%lld\n",ans);

	return 0;
}