#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0};
int b[100005] = {0};
int f[100005] = {0};
bool vis[100005] = {0},go[100005] = {0};
string ans = "";
vector<int> fn[100005];

void dfs(int t){
    for(auto && i : fn[t]){
        if(!vis[i]){
            vis[i] = 1;
            dfs(i);
        }
    }
}

void dfs2(int t){
    int ta = t + a[t],tb = t + b[t];
    if(ta > 0 && ta <= n && !vis[ta]){
        vis[ta] = 1;
        f[ta] = t;
        dfs2(ta);
    }
    if(tb > 0 && tb <= n && !vis[tb]){
        vis[tb] = 1;
        f[tb] = t;
        dfs2(tb);
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        int ta = i + a[i];
        if(ta > 0 && ta <= n){
            fn[ta].push_back(i);
        }
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&b[i]);
        int tb = i + b[i];
        if(tb > 0 && tb <= n){
            fn[tb].push_back(i);
        }
    }
    vis[n] = 1;
    dfs(n);
    go[1] = 1;
    int now = 1;
    while(now != n){
        int ta = now + a[now],tb = now + b[now];
        if(ta > 0 && ta <= n && vis[ta]){
            if(go[ta]){
                printf("Infinity!\n");
                return 0;
            }
            go[ta] = 1;
            ans = ans + "a";
            now = ta;
        }else if(tb > 0 && tb <= n && vis[tb]){
            if(go[tb]){
                printf("Infinity!\n");
                return 0;
            }
            go[tb] = 1;
            ans = ans + "b";
            now = tb;
        }else{
            printf("No solution!\n");
            return 0;
        }
    }
    cout << ans << endl;

	return 0;
}