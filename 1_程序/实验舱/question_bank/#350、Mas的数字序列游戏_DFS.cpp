#include<bits/stdc++.h>
using namespace std;

int n;
long long a[105],t[105];
unordered_map<long long,int> cnt;

void dfs(int k,long long x){
    // cout << k << " " << x << ";;\n";
    if(k == n - 1){
        for(int i = 0;i < n;i ++){
            printf("%lld%c",t[i]," \n"[i == n - 1]);
        }
        exit(0);
    }
    if(cnt[x * 2]){
        cnt[x * 2] --;
        t[k + 1] = x * 2;
        dfs(k + 1,x * 2);
        cnt[x * 2] ++;
    }
    if(x % 3 == 0 && cnt[x / 3]){
        cnt[x / 3] --;
        t[k + 1] = x / 3;
        dfs(k + 1,x / 3);
        cnt[x / 3] ++;
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
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
        cnt[a[i]] ++;
    }
    for(int i = 0;i < n;i ++){
        cnt[a[i]] --;
        t[0] = a[i];
        dfs(0,a[i]);
        cnt[a[i]] ++;
    }

    return 0;
}