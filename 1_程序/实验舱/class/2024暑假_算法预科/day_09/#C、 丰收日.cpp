#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,t,ans = 0;
int d[__len(5)];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&t);
    for(int i = 1;i < n;i ++){
        scanf("%d",&d[i]);
        d[i] --;
    }
    for(int i = 1;i < n;i ++){
        if(d[i] == -114514) continue;
        ans ++;
        for(int j = i + 1;j < n;j ++){
            if(d[j] == -114514) continue;
            if(d[j] % d[i] == 0) d[j] = -114514;
        }
    }
    printf("%d\n",ans);

    return 0;
}