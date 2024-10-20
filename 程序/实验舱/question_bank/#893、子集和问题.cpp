#include<bits/stdc++.h>
using namespace std;

int T,n;
long long a[100005];
bool ans;
unordered_map<long long,bool> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        f.clear();
        ans = 0;
        for(int i = 1;i <= n;i ++){
            scanf("%lld",&a[i]);
            f[a[i]] = 1;
            a[i] += a[i - 1];
        }
        for(int i = 0;i <= n;i ++){
            long long s1 = a[i],s2 = a[n] - a[i];
            if(abs(s1 - s2) % 2 == 0 && f[abs(s1 - s2) / 2]){
                ans = 1;
                break;
            }
        }
        if(ans) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}