#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,q;
int u,v;
int a[100005];
long long sum[100005];
vector<int> e[100005];
int fa[100005];
int size[100005];
long long sub[100005];
long long val[100005];

void erg(int u){
    for(auto && i : e[u]){
        if(i == fa[u]) continue;
        fa[i] = u;
        erg(i);
        size[u] += size[i];
        sub[u] += sub[i];
    }
    size[u] ++;
    sub[u] += a[u];
}

void pushup(int u,int v){
    int pos = u;
    while(pos){
        val[pos] = val[pos] - a[u] + a[v];
        pos = fa[pos];
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

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        sum[i] = a[i];
    }
    sort(sum + 1,sum + n + 1);
    for(int i = 1;i <= n;i ++){
        sum[i] += sum[i - 1];
    }
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&u,&v);
        e[u].push_back(v);
        e[v].push_back(u);
    }
    erg(1);
    for(int i = 1;i <= n;i ++){
        // cout << size[i] << " " << sub[i] << " " << val[i] << "\n";
        val[i] = sub[i] - sum[size[i]];
    }
    while(q --){
        scanf("%d %d",&u,&v);
        pushup(u,v);
        pushup(v,u);
        swap(a[u],a[v]);
        int minsize = 0x3f3f3f3f,res = 0;
        for(int i = 1;i <= n;i ++){
            if(val[i] == 0){
                minsize = min(minsize,size[i]);
            }
        }
        for(int i = 1;i <= n;i ++){
            if(val[i] != 0 || size[i] != minsize) continue;
            // cout << i << "[]\n";
            res += i;
        }
        printf("%d\n",res);
    }

    return 0;
}