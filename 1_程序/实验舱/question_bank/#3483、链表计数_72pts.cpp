#include<bits/stdc++.h>
using namespace std;

struct node{
    int dat,nxt;
};

int n,pos,cnt = 0,ans = 0,maxn = 0;
node a[100005];
bool vis[100005];
bool mark[100005];
vector<int> num;

void erg(int st){
    for(int i = st;i != -1;i = a[i].nxt){
        mark[i] = 1;
    }
}

int erg2(int st){
    int res = 0;
    for(int i = st;;i = a[i].nxt){
        res += a[i].dat;
        mark[i] = 1;
        if(a[i].nxt == st) break;
    }
    return res;
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
        scanf("%d",&pos);
        scanf("%d %d",&a[pos].dat,&a[pos].nxt);
        if(a[pos].nxt != -1 && !vis[a[pos].nxt]){
            vis[a[pos].nxt] = 1;
            cnt ++;
        }
        num.push_back(pos);
    }
    sort(num.begin(),num.end());
    printf("%d\n",num.size() - cnt);
    if(num.size() == cnt){
        printf("-1");
    }
    for(auto && i : num){
        if(vis[i]) continue;
        printf("%05d ",i);
        erg(i);
    }
    printf("\n");
    for(auto && i : num){
        if(mark[i]) continue;
        ans ++;
        maxn = max(maxn,erg2(i));
    }
    printf("%d\n%d\n",ans,maxn);

    return 0;
}