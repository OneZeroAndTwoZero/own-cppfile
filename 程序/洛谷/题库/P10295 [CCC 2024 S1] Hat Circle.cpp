#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[1000006];

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
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        if(a[i] == a[(i + (n >> 1)) % n]) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}