#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int li,ri;
    int id;
    bool operator < (const node &a) const{
        if(li != a.li) return li < a.li;
        return ri < a.ri;
    }
};

int n;
int maxm,ans;
node a[1000005];
node t[1000005];

void putout(int x){
    if(!x) return;
    putout(x >> 1);
    printf("%d",(x & 1));
}

void check(int size){
    for(int i = 0;i < size - 1;i ++){
        if(t[i].ri >= t[i + 1].li) return;
    }
    if(size < maxm) return;
    int cur = 0;
    for(int i = 0;i < size;i ++){
        cur += (1 << t[i].id);
    }
    // putout(cur);
    // printf("\n");
    if(size > maxm){
        maxm = size;
        ans = cur;
    }else{
        ans = max(ans,cur);
    }
}

void dfs(int k,int size){
    if(k == n){
        check(size);
        return;
    }
    t[size] = a[k];
    dfs(k + 1,size + 1);
    dfs(k + 1,size);
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
        a[i].id = i;
        scanf("%d %d",&a[i].li,&a[i].ri);
    }
    sort(a,a + n);
    dfs(0,0);
    if(ans == 0) printf("0\n");
    putout(ans);

    return 0;
}