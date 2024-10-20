#include<bits/stdc++.h>
using namespace std;

struct node{
    long long ui,vi,wi;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

struct edgenode{
    long long vi,wi;
};

long long n,m,k,ans;
long long f[500005];
node edge[1000006];
vector<edgenode> a[1000005];
long long fa[1000006];
long long h[2000005];
vector<long long> q;
long long sum[100005];

long long find(long long x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(long long x,long long y){
    long long fx = find(x),fy = find(y);
    f[fx] = f[fy] = fx;
}

void erg(long long u,long long dep){
    h[u] = dep;
    for(auto && i : a[u]){
        if(i.vi == fa[u]) continue;
        fa[i.vi] = u;
        erg(i.vi,dep + 1);
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

    scanf("%lld %lld %lld",&n,&m,&k);
    for(long long i = 1;i <= n;i ++){
        f[i] = i;
    }
    for(long long i = 0;i < m;i ++){
        scanf("%lld %lld %lld",&edge[i].ui,&edge[i].vi,&edge[i].wi);
    }
    sort(edge,edge + m);
    for(long long i = 0;i < m;i ++){
        if(find(edge[i].ui) == find(edge[i].vi)) continue;
        merge(edge[i].ui,edge[i].vi);
        a[edge[i].ui].push_back({edge[i].vi,edge[i].wi});
        a[edge[i].vi].push_back({edge[i].ui,edge[i].wi});
    }
    erg(1,0);
    long long cur = n;
    while(1){
        if(cur == 1) break;
        for(auto && i : a[fa[cur]]){
            if(i.vi != cur) continue;
            q.push_back(i.wi);
        }
        cur = fa[cur];
    }
    sort(q.begin(),q.end(),greater<int>());
    for(long long i = 0;i < q.size();i ++){
        // cout << q[i] << " ";
        sum[i + 1] = sum[i] + q[i];
    }
    // cout << "\n";
    ans = q.front();
    q.push_back(0);
    sum[q.size()] = sum[q.size() - 1];
    for(long long i = 1;i < q.size();i ++){
        for(long long j = q[i - 1];j >= q[i];j --){
            if(sum[i] - (long long)j * i <= k){
                ans = j;
            }
        }
    }
    printf("%lld\n",ans);

    return 0;
}