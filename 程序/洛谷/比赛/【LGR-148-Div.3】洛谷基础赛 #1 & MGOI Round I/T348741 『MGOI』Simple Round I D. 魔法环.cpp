#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[200005] = {0};
bool vis[200005] = {0};
int ans = 0x3f3f3f3f;

int check(){
    int res = 0;
    for(int i = 0;i < n;i ++){
        a[i + n] = a[i];
        vis[i + n] = vis[i];
    }
    for(int i = 0;i < n;i ++){
        if(vis[i]){
            res += a[i] * a[i];
            continue;
        }
        int l = 1,r = 1,lm = 0,rm = 0;
        for(int j = 1;j < n;j ++){
            if(vis[i + j]){
                r = j;
                rm = a[i + j];
                break;
            }
        }
        for(int j = 1;j < n;j ++){
            if(vis[i + n - j]){
                l = j;
                lm = a[i + n - j];
                break;
            }
        }
        if(lm < rm){
            res += rm * r;
        }else{
            res += lm * l;
        }
        cout << res << ";;;;\n";
    }
    return res;
}

void dfs(int u,int num){
    if(u == n){
        if(num >= 2)
            ans = min(ans,check());
        return;
    }
    vis[u] = 1;
    dfs(u + 1,num + 1);
    vis[u] = 0;
    dfs(u + 1,num);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        a[i + n] = a[i];
    }
    dfs(0,0);
    printf("%d\n",ans);

	return 0;
}