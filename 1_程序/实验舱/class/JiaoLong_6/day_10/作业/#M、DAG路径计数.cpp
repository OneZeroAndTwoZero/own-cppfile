#include<bits/stdc++.h>
using namespace std;

int n,m,s,t,mod = 1000000007;
int u,v;
int d[100005],ans[100005];
vector<int> a[100005];

void toposort(){
    queue<int> q;
    for(int i = 1;i <= n;i ++)
        if(!d[i]) q.push(i);
    while(q.size()){
        int t = q.front();
        q.pop();
        for(auto && i : a[t]){
            ans[i] = (ans[i] + ans[t]) % mod;
            if(!(-- d[i])) q.push(i);
        }
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

    scanf("%d %d %d %d",&n,&m,&s,&t);
    while(m --){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        d[v] ++;
    }
    ans[s] = 1;
    toposort();
    printf("%d\n",ans[t]);

	return 0;
}