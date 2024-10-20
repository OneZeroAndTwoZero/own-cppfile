#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
#pragma GCC optimize(2)
using namespace std;

int id,n,q;
int b[1000005];
int a[1000005];
int l[1000005];
int r[1000005];
int x[1000005];
int u[1000005];
int v[1000005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&id,&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&b[i]);
    }
    for(int i = 0;i < q;i ++){
        scanf("%d %d %d %d %d",&l[i],&r[i],&x[i],&u[i],&v[i]);
    }
    for(int i = 0;i < q;i ++){
        for(int j = l[i];j <= r[i];j ++){
            a[j - l[i] + 1] = b[j];
        }
        for(int k = 1;k <= x[i];k ++){
            for(int j = 1;j <= (r[i] - l[i] + 1) - k;j ++){
                if(a[j] > a[j + 1]) swap(a[j],a[j + 1]);
            }
        }
        long long res = 0;
        for(int j = u[i];j <= v[i];j ++){
            res += a[j];
        }
        printf("%lld\n",res);
    }

    return 0;
}