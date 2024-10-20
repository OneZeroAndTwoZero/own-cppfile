#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,t,ans;
int maxr[2 * __len(3)],maxc[2 * __len(3)];

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
        for(int j = 0;j < n;j ++){
            scanf("%d",&t);
            if(!t) continue;
            ans ++;
            maxr[i] = max(maxr[i],t);
            maxc[j] = max(maxc[j],t);
        }
    }
    for(int i = 0;i < n;i ++){
        ans += maxr[i];
        ans += maxc[i];
    }
    printf("%d\n",ans);

    return 0;
}