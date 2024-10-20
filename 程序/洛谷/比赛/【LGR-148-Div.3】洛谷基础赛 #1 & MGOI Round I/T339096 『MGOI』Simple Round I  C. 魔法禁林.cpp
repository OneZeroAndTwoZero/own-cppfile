#include<bits/stdc++.h>
using namespace std;

struct node{
    int vi,wi;
};

int n,m,s,t;
int u,v,w;
int ans = 0x3f3f3f3f;
vector<node> a[300005];

void dfs(int u,int sum,int num){
    cout << u << "[][]" << num << endl;
    if(u == t){
        if(num == 0) ans = min(ans,sum);
        return;
    }
    if(sum > ans) return;
    if(num < 0) return;
    cout << a[u].size() << "\n";
    for(auto && i : a[u]){
        cout << u << "   " << i.vi << "\n";
        int tem = i.wi / num;
        dfs(i.vi,sum + tem,num - 1);
        cout << "=============\n";
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&m,&s,&t);
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&u,&v,&w);
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    dfs(s,0,m);
    printf("%d\n",ans);

	return 0;
}