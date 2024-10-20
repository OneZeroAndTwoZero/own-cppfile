#include<bits/stdc++.h>
using namespace std;

int n,m,k;
int x[505],y[505];
unordered_map<int,int> f;
long long ans = 0;

int pushin(int x){
    if(f[x]) return 0;
    f[x] = 1;
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d %d",&n,&m,&k);
    for(int i = 0;i < k;i ++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(int i = 1;i <= n;i ++){
        bool cur = 0;
        int cnt = 0;
        f.clear();
        for(int j = 0;j < k;j ++){
            if(x[j] == i){
                cur = 1;
                break;
            }
            cnt += pushin(y[j]);
            if(x[j] + y[j] - i > 0 && x[j] + y[j] - i <= m)
                cnt += pushin(x[j] + y[j] - i);
            if(i - (x[j] - y[j]) > 0 && i - (x[j] - y[j]) <= m)
                cnt += pushin(i - (x[j] - y[j]));
        }
        if(cur) continue;
        ans += m - cnt;
    }
    printf("%lld\n",ans);

    return 0;
}