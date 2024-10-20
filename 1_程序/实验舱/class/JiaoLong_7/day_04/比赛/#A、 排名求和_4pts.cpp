#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
#pragma GCC optimize(2)
using namespace std;

int n;
int p[2000006],q[2000006];
int a[2000006];
int c[1000006];

void update(int x){
    for(int i = x;i <= n + 1;i += lowbit(i)){
        c[i] ++;
    }
}

int query(int x){
    int res = 0;
    for(int i = x;i;i -= lowbit(i)){
        res += c[i];
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
    memset(c,0,sizeof(c));
    for(int i = 1;i <= n;i ++){
        scanf("%d",&p[i]);
        p[i] ++;
    }
    for(int j = 1;j <= n;j ++){
        int cur = p[j] - query(p[j] - 1) - 1;
        update(p[j]);
        p[j] = cur;
    }
    memset(c,0,sizeof(c));
    for(int i = 1;i <= n;i ++){
        scanf("%d",&q[i]);
        q[i] ++;
    }
    for(int j = 1;j <= n;j ++){
        int cur = q[j] - query(q[j] - 1) - 1;
        update(q[j]);
        q[j] = cur;
    }
    // for(int i = 1;i <= n;i ++){
    //     printf("%d%c",p[i]," \n"[i == n]);
    // }
    // for(int i = 1;i <= n;i ++){
    //     printf("%d%c",q[i]," \n"[i == n]);
    // }
    memset(c,0,sizeof(c));
    for(int i = 1;i <= n;i ++){
        a[i] = p[i] + q[i];
    }
    if(a[1] >= n) a[1] -= n;
    for(int i = 1;i <= n;i ++){
        int cur = a[i] + query(a[i] + 1);
        update(a[i] + 1);
        a[i] = cur;
    }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",a[i]," \n"[i == n]);
    }

    return 0;
}