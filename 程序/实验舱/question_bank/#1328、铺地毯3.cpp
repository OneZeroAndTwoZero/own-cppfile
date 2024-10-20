#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int x,y;
int a[1005],b[1005],k[1005],g[1005];

int count(int x,int y){
    int res = 0;
    for(int i = 0;i < n;i ++){
        if(x < a[i] || y < b[i]) continue;
        // must use '>' ,not '>='
        if(x > a[i] + k[i] || y > b[i] + g[i]) continue;
        res ++;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%d %d %d %d",&a[i],&b[i],&k[i],&g[i]);
    }
    while(m --){
        scanf("%d %d",&x,&y);
        ans = max(ans,count(x,y));
    }
    printf("%d\n",ans);

    return 0;
}