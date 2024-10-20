#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,val;
    bool operator < (const node &a) const{
        if(val != a.val) return val > a.val;
        return idx < a.idx;
    }
};

int n,t;
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
    for(int i = 0;i <= 10000;i ++){
        a[i].idx = i;
    }
    while(n --){
        scanf("%d",&t);
        a[t].val ++;
    }
    sort(a,a + 10002);
    for(int i = 0;i < 10;i ++){
        if(a[i].val == 0) break;
        printf("%d %d\n",a[i].idx,a[i].val);
    }

    return 0;
}