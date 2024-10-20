#include<bits/stdc++.h>
using namespace std;

int cnt;
bool vis[15];
double a[15],now[15];
int ans[15],nowidx[15];

bool check(){
    double res = fabs((now[1] / now[2]) - (now[3] / now[4]));
    return res < 0.5;
}

bool ismove(){
    if(ans[1] == 0) return 1;
    for(int i = 1;i < 5;i ++){
        if(nowidx[i] < ans[i]) return 1;
        if(nowidx[i] > ans[i]) return 0;
    }
    return 0;
}

void dfs(int k){
    if(k == 5){
        if(!check()) return;
        cnt ++;
        if(!ismove()) return;
        for(int i = 1;i < 5;i ++){
            ans[i] = nowidx[i];
        }
        return;
    }
    for(int i = 1;i <= 5;i ++){
        if(vis[i]) continue;
        vis[i] = 1;
        now[k] = a[i],nowidx[k] = i;
        dfs(k + 1);
        vis[i] = 0;
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

    for(int i = 1;i <= 5;i ++){
        scanf("%lf",&a[i]);
    }
    dfs(1);
    printf("%d ",cnt);
    for(int i = 1;i <= 4;i ++){
        printf("%d%c",ans[i]," \n"[i == 4]);
    }

	return 0;
}