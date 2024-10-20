#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0;
int a[200005],b[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
        if(a[i]) ans += 3;
    }
    for(int i = 0;i < n;i++){
        scanf("%d",&b[i]);
        if(b[i]) ans += 3;
    }
    for(int i = 0;i < n;i++){
        if(i != 0){
            if(a[i] && a[i - 1]) ans --;
            if(b[i] && b[i - 1]) ans --;
        }
        if(i != n - 1){
            if(a[i] && a[i + 1]) ans --;
            if(b[i] && b[i + 1]) ans --;
        }
        if(i % 2 == 0){
            if(a[i] && b[i]){
                ans -= 2;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
