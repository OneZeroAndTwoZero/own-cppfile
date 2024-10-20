#include<bits/stdc++.h>
using namespace std;

int n,ans = 15;
int a[105] = {0};
int cnt[105] = {0};

int gcd(int a,int b){
    if(!b) return a;
    return gcd(b,a % b);
}

bool ok(int l,int r){
    for(int i = l;i < r;i ++){
        for(int j = i + 1;j < r;j ++){
            if(gcd(a[i],a[j]) != 1) return 0;
        }
    }
    return 1;
}

bool check(){
    int l = 0,r = 0;
    while(r <= n){
        while(cnt[r] == cnt[l] && r <= n){
            r ++;
        }
        if(!ok(l,r)) return 0;
        l = r;
    }
    return 1;
}

void dfs(int k,int now){
    if(k == n){
        if(check()){
            ans = min(ans,now + 1);
        }
        return;
    }
    cnt[k] = now;
    dfs(k + 1,now);
    if(k != n - 1) dfs(k + 1,now + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    dfs(0,0);
    printf("%d\n",ans);

	return 0;
}