#include<bits/stdc++.h>
using namespace std;

int n,q;
long long a[200005];
long long sum,ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&q);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
        sum += a[i];
    }
    sort(a,a + n,greater<int>());
    // for(int i = 0;i < n;i ++){
    //     cout << a[i] << "[]\n";
    // }
    for(int i = 0;i < n;){
        // cout << i << ";;\n";
        if(i + 2 < n && a[i + 2] > (a[i] + a[i + 1] + a[i + 2]) / 100 * q){
            // cout << 1 << "[[]]\n";
            // cout << a[i + 2] << " " << ans << "\n";
            ans += a[i + 2];
            i += 3;
        }else{
            // cout << 2 << "[[]]\n";
            ans += a[i] / 100 * q;
            i ++;
        }
        // cout << ans << "[]\n";
    }
    printf("%lld\n",sum - ans);

    return 0;
}