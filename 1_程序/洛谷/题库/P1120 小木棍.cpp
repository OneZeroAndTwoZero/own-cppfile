#include<bits/stdc++.h>
using namespace std;

int n,sum,l;
int a[105];
bool vis[105];
int nxt[105];

bool dfs(int k,int cur,int f){
    if(k == n){
        return 1;
    }
    if(cur == l) return dfs(k,0,0);
    for(int i = f;i < n;){
        if(vis[i] || cur + a[i] > l){
            i ++;
            continue;
        }
        vis[i] = 1;
        if(dfs(k + 1,cur + a[i],i + 1)){
            return 1;
        }
        vis[i] = 0;
        if(a[i] == l - cur || cur == 0) return 0;
        i = nxt[i];
    }
    return 0;
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
        scanf("%d",&a[i]);
        sum += a[i];
    }
    sort(a,a + n,greater<int>());
    for(int i = 0;i < n;i ++){
        nxt[i] = n;
        for(int j = i + 1;j < n;j ++){
            if(a[j] != a[i]){
                nxt[i] = j;
                break;
            }
        }
    }
    for(int i = a[0];i <= sum / 2;i ++){
        if(sum % i) continue;
        for(int j = 0;j < n;j ++){
            vis[j] = 0;
        }
        l = i;
        if(dfs(0,0,0)){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("%d\n",sum);

    return 0;
}