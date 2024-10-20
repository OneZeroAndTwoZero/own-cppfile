#include<bits/stdc++.h>
using namespace std;

int n;
long long a[105];

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
        scanf("%lld",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n - i;j ++){
            if(a[j + 1] * 3LL == a[j] || a[j] * 2LL == a[j + 1]) continue;
            swap(a[j],a[j + 1]);
        }
    }
    for(int i = 1;i <= n;i ++){
        printf("%lld%c",a[i]," \n"[i == n]);
    }

    return 0;
}