#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,w;
    bool operator < (const node &a) const{
        if(l != a.l) return l < a.l;
        return w < a.w;
    }
};

int T,n,ans;
node a[5005];
int t[5005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        ans = 1;
        for(int i = 0;i < n;i ++){
            scanf("%d %d",&a[i].l,&a[i].w);
            t[i] = 0;
        }
        sort(a,a + n);
        for(int i = 0;i < n;i ++){
            int pos = lower_bound(t,t + ans,a[i].w,greater<int>()) - t;
            if(pos == ans || t[pos] < a[i].w) t[pos] = a[i].w;
            ans = max(pos + 1,ans);
        }
        printf("%d\n",ans);
    }

    return 0;
}