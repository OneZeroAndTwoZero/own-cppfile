#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int st[105][105] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < n;j ++)
            if(i == j) continue;
            else st[i][j] = ((j - i + n) % n) * (i + 1);
    for(int k = 0;k < n;k ++)
        for(int i = 0;i < n;i ++)
            for(int j = 0;j < n;j ++)
                st[i][j] = min(st[i][j],st[i][k] + st[k][j]);
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < n;j ++)
            if(i == j) continue;
            else ans = max(ans,st[i][j]);
    printf("%d\n",ans);

	return 0;
}