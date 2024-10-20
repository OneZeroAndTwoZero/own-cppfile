#include<bits/stdc++.h>
using namespace std;

int n,m;
long long ans = -0x3f3f3f3f3f3f3f3f;
long long a[505][505];

long long operate(int s,int t){
    long long res = -0x3f3f3f3f3f3f3f3f,now = 0;
    for(int i = 1;i <= m;i ++){
        now = max(now + (a[t][i] - a[s][i]),a[t][i] - a[s][i]);
        res = max(res,now);
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%lld",&a[i][j]);
            a[i][j] += a[i - 1][j];
        }
    }
    for(int s = 0;s < n;s ++){
        for(int t = s + 1;t <= n;t ++){
            ans = max(ans,operate(s,t));
        }
    }
    printf("%lld\n",ans);

    return 0;
}