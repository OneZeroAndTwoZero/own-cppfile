#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0};
int b[100005] = {0};
int f[100005] = {0};
bool vis[100005] = {0};
string ans = "";

void bfs(){
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(q.size()){
        int t = q.front();
        q.pop();
        int ta = t + a[t],tb = t + b[t];
        if(ta > 0 && ta <= n && !vis[ta]){
            vis[ta] = 1;
            f[ta] = t;
            q.push(ta);
        }
        if(tb > 0 && tb <= n && !vis[tb]){
            vis[tb] = 1;
            f[tb] = t;
            q.push(tb);
        }
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
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&b[i]);
    }
    bfs();
    if(!vis[n]){
        printf("No solution!\n");
        return 0;
    }
    int now = n;
    while(now != 1){
        int t = f[now];
        if(t + a[t] == now){
            ans = "a" + ans;
        }else{
            ans = "b" + ans;
        }
        now = t;
    }
    cout << ans << endl;

	return 0;
}