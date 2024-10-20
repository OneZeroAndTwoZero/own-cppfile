#include<bits/stdc++.h>
using namespace std;

long long n,a[1000005],vis1[1000005],vis2[1000005];
stack<long long> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        memset(a,0,sizeof a);
        memset(vis1,0,sizeof vis1);
        memset(vis2,0,sizeof vis2);
        scanf("%d",&n);
        if(n == 0) break;
        for(int i = 1; i <= n; i ++){
            scanf("%lld",&a[i]); 
        }
        for(int i = 1; i <= n; i ++){
            while(!s.empty() && a[s.top()] > a[i]){
                vis1[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(s.size()) s.pop();
        for(int i = n; i >= 1; i --){
            while(!s.empty() && a[s.top()] > a[i]){
                vis2[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(s.size()) s.pop();
        long long maxn = 0;
        for(int i = 1; i <= n; i ++){
            if(vis1[i] == 0) vis1[i] = n + 1;
            maxn = max(maxn, (vis1[i] - vis2[i] - 1) * a[i]);
        }
        printf("%lld\n",maxn);
    }

    return 0;
}
