#include<bits/stdc++.h>
using namespace std;

int n,ans = 1;
int r = 1;
int a[100005];
int cnt[100005];

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
    for(int i = 1;i <= n;i ++){
        while(r <= n && !cnt[a[r]]){
            cnt[a[r]] = 1;
            r ++;
        }
        ans = max(ans,r - i);
        cnt[a[i]] --;
    }
    printf("%d\n",ans);

    return 0;
}