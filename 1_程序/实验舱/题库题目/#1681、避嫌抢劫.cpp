#include<bits/stdc++.h>
using namespace std;

struct node{
    int pos,val,max_;
    bool operator < (const node &a) const{
        return pos < a.pos;
    }
};

int n,d,r = 1,ans;
node a[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&d);
    for(int i = 1;i <= n;i ++)
        scanf("%d %d",&a[i].pos,&a[i].val);
    sort(a + 1,a + n + 1);
    for(int i = n;i > 0;i --)
        a[i].max_ = max(a[i].val,a[i + 1].max_);
    for(int i = 1;i <= n;i ++){
        while(r <= n && a[r].pos - a[i].pos < d) r ++;
        if(r == n + 1) break;
        ans = max(ans,a[i].val + a[r].max_);
    }
    printf("%d\n",ans);

	return 0;
}