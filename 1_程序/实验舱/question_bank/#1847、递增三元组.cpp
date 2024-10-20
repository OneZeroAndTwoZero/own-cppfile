#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],b[100005],c[100005];
int cntnum[100005];
long long ans = 0,cnt[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    for(int i = 0;i < n;i ++)
        scanf("%d",&b[i]);
    for(int i = 0;i < n;i ++){
        scanf("%d",&c[i]);
        cntnum[c[i]] ++;
    }
    for(int i = 1;i <= 100001;i ++)
        cntnum[i] += cntnum[i - 1];
    for(int i = 0;i < n;i ++)
        cnt[b[i]] += cntnum[100001] - cntnum[b[i]];
    for(int i = 1;i <= 100001;i ++)
        cnt[i] += cnt[i - 1];
    for(int i = 0;i < n;i ++)
        ans += cnt[100001] - cnt[a[i]];
    printf("%lld\n",ans);

    return 0;
}