#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[100005];
unordered_map<int,int> f;
int vis[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    ans = n;
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        f[a[i]] ++;
    }
    for(int k = 0;k <= 31;k ++){
        int cur = (1 << k);
        for(int i = 0;i < n;i ++){
            if(cur <= a[i] || vis[i]) continue;
            if(a[i] * 2 == cur){
                if(f[a[i]] > 1) vis[i] = 1;
            }else{
                if(f[cur - a[i]]) vis[i] = 1;
            }
        }
    }
    for(int i = 0;i < n;i ++){
        if(vis[i]) ans --;
    }
    printf("%d\n",ans);

    return 0;
}