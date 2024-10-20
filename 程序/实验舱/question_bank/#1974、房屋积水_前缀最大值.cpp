#include<bits/stdc++.h>
using namespace std;

int n,r,ans = 0;
int a[1000005] = {0};
int max0[1000005] = {0};
int maxn[1000005] = {0};

void make(){
    for(int i = 1;i <= n;i ++){
        a[i] = r % 10;
        r = (r * 6807 + 2831) % 201701;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&r);
    make();
    for(int i = n;i >= 1;i --)
        maxn[i] = max(maxn[i + 1],a[i]);
    for(int i = 0;i < n;i ++){
        max0[i] = max(max0[i - 1],a[i]);
        ans += max(0,min(max0[i - 1],maxn[i + 1]) - a[i]);
    }
    printf("%d\n",ans);

	return 0;
}