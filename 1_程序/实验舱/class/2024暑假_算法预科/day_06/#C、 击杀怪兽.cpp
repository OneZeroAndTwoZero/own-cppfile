#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    long long val;
    int id;
    bool operator < (const node &a) const{
        if(val != a.val) return val > a.val;
        return id < a.id;
    }
};

int n;
long long k;
node a[__len(6)];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %lld",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i].val);
        a[i].id = i + 1;
        if(a[i].val == 0) continue;
        a[i].val %= k;
        if(a[i].val == 0) a[i].val = k;
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        printf("%d%c",a[i].id," \n"[i == n - 1]);
    }

    return 0;
}