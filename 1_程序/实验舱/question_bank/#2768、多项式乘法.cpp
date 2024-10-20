#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005],b[1005];
int ans[2005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i <= m;i ++){
        scanf("%d",&b[i]);
    }
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= m;j ++){
            ans[i + j] += a[i] * b[j];
        }
    }
    for(int i = 0;i < n + m + 1;i ++){
        printf("%d ",ans[i]);
    }

    return 0;
}