#include<bits/stdc++.h>
using namespace std;

struct node{
    int s,t,val;
    bool operator < (const node &a) const{
        return t < a.t;
    }
};

int n,m,ans = 0;
node a[5005];
bool vis[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&a[i].s,&a[i].t,&a[i].val);
    }
    sort(a,a + m);
    for(int i = 0;i < m;i ++){
        int num = a[i].val;
        for(int j = a[i].t;j >= a[i].s;j --){
            if(vis[j]) num --;
        }
        for(int j = a[i].t;j >= a[i].s;j --){
            if(num <= 0) break;
            if(vis[j]) continue;
            vis[j] = 1,num --;
        }
    }
    for(int i = 1;i <= n;i ++){
        if(vis[i]) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}