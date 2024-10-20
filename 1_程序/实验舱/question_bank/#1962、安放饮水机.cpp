#include<bits/stdc++.h>
using namespace std;

struct node{
    int li,ri;
    bool operator < (const node &a) const{
        return ri < a.ri;
    }
};

int n,s,w;
int ans = 0,cur = -0x3f3f3f3f;
node a[10005];

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
        scanf("%d %d",&s,&w);
        a[i].li = s - w,a[i].ri = s + w;
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        if(cur < a[i].li){
            cur = a[i].ri;
            ans ++;
        }
    }
    printf("%d\n",ans);

    return 0;
}