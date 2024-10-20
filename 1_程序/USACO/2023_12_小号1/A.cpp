#include<bits/stdc++.h>
using namespace std;

int n,m;
long long pos = 0,ans[200005],h[200005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&ans[i]);
    }
    for(int i = 0;i < m;i ++){
        scanf("%lld",&h[i]);
    }
    for(int i = 0;i < m;i ++){
        pos = 0;
        for(int j = 0;j < n;j ++){
            if(ans[j] <= pos) continue;
            long long t = max(min(ans[j] - pos,h[i] - pos),0LL);
            pos = ans[j];
            ans[j] += t;
        }
    }
    for(int i = 0;i < n;i ++){
        printf("%lld\n",ans[i]);
    }

    return 0;
}
