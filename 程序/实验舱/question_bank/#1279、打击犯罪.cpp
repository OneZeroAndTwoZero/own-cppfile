#include<bits/stdc++.h>
using namespace std;

int n,k,t;
bool check = 0;
char op;
int f[100005];
int cnt[100005];
vector<int> a[100005];

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int a,int b){
    int fa = find(a),fb = find(b);
    if(fa == fb) return;
    cnt[fa] += cnt[fb];
    f[fb] = fa;
    if(cnt[fa] > (n >> 1)) check = 1;
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
    for(int i = 1;i <= n;i ++){
        f[i] = i;
        cnt[i] = 1;
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&k);
        while(k --){
            scanf("%d",&t);
            a[i].push_back(t);
        }
    }
    for(int i = n;i > 0;i --){
        for(int j = 0;j < a[i].size();j ++){
            if(a[i][j] < i) continue;
            merge(a[i][j],i);
        }
        if(check){
            printf("%d\n",i);
            return 0;
        }
    }

    return 0;
}