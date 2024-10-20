#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    int li,ri;
    bool operator < (const node &a) const{
        return li > a.li;
    }
};

int n,ans,now;
node a[1000005];

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
        scanf("%d %d",&a[i].li,&a[i].ri);
    }
    sort(a,a + n);
    ans = 1;
    now = a[0].li;
    for(int i = 1;i < n;i++){
        if(a[i].ri < now){
            ans ++;
            now = a[i].li;
        }
    }
    printf("%d\n",ans);

    return 0;
}

