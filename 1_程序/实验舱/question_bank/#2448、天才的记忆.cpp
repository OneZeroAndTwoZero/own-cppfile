#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[200005];
int st[200005][35];
int x,y;

int getans(int l,int r){
    return max(st[l][__lg(r - l + 1)]
    ,st[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]);
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
        st[i][0] = a[i];
    }
    for(int j = 1;j <= __lg(n) + 1;j ++){
        // 边界条件时记得减一(血的教训)
        for(int i = 1;i + (1 << j) - 1 <= n;i ++){
            st[i][j] = max(st[i][j - 1],st[i + (1 << (j - 1))][j - 1]);
        }
    }
    scanf("%d",&m);
    while(m --){
        scanf("%d %d",&x,&y);
        printf("%d\n",getans(x,y));
    }

    return 0;
}