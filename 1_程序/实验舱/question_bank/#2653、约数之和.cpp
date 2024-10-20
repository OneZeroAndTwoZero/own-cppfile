#include<bits/stdc++.h>
using namespace std;

int n,t;
long long ans = 1,mod = 1000000007;
unordered_map<int,int> cnt;

void operate(int x){
    for(int i = 2;i <= x / i;i ++){
        while(x % i == 0){
            cnt[i] ++;
            x /= i;
        }
    }
    if(x != 1) cnt[x] ++;
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
    while(n --){
        scanf("%d",&t);
        operate(t);
    }
    for(auto && i : cnt){
        long long sum = 0,cur = 1;
        for(int k = 0;k <= i.second;k ++){
            sum = (sum + cur) % mod;
            cur = (cur * i.first) % mod;
        }
        ans = (ans * sum) % mod;
    }
    printf("%lld\n",ans);

    return 0;
}