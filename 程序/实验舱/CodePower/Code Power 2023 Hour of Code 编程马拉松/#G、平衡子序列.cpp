#include<bits/stdc++.h>
using namespace std;

int n,pos = 1;
set<long long> s;
unordered_map<long long,int> ser;
long long maxn = -0x3f3f3f3f3f3f3f3f,a[500005];
long long dp[500005][2];
long long c[500005];

int lowbit(int x){
    return (x & -x);
}

long long sear(int x){
    long long res = 0;
    for(x;x;x -= lowbit(x)){
        res = max(res,c[x]);
    }
    return res;
}

void update(int x,long long num){
    for(x;x <= pos;x += lowbit(x)){
        c[x] = max(c[x],num);
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

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        maxn = max(maxn,a[i]);
        s.insert(a[i] - i);
    }
    if(maxn < 0){
        printf("%lld\n",maxn);
        return 0;
    }
    while(s.size()){
        ser[*s.begin()] = pos ++;
        s.erase(s.begin());
    }
    for(int i = 1;i <= n;i ++){
        // cout << i << "  []\n";
        dp[i][0] = max(dp[i - 1][0],dp[i - 1][1]);
        // cout << ser[(a[i] - i)] << ";;" << sear(ser[(a[i] - i)]) << ";;\n";
        dp[i][1] = sear(ser[(a[i] - i)]);
        dp[i][1] += a[i];
        update(ser[(a[i] - i)],dp[i][1]);
        // cout << dp[i][0] << "        " << dp[i][1] << "\n";
    }
    printf("%lld\n",max(dp[n][0],dp[n][1]));

    return 0;
}