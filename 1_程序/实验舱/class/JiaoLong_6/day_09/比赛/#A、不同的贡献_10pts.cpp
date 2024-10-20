#include<bits/stdc++.h>
using namespace std;

int n,q;
int l,r;
int a[500005];

long long operate(int l,int r){
    long long res = 0;
    unordered_map<int,int> f;
    for(int i = l;i <= r;i ++){
        if(f[a[i]] == 0){
            res += a[i];
            f[a[i]] = 1;
        }
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
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d %d",&l,&r);
        printf("%lld\n",operate(l,r));
    }

    return 0;
}
