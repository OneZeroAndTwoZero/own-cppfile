#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int x,y;
}t;

int n;

int f[4][2] = {{1,1},{-1,1},{1,-1},{-1,-1}};
int maxn[4] = {INT_MIN,INT_MIN,INT_MIN,INT_MIN};

void update(node x){
    for(int i = 0;i < 4;i ++)
        maxn[i] = max(maxn[i],x.x * -f[i][0] + x.y * -f[i][1]);
}

int getans(node x){
    int res = -1;
    for(int i = 0;i < 4;i ++)
        res = max(x.x * f[i][0] + x.y * f[i][1] + maxn[i],res);
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&t.x,&t.y);
        if(i) printf("%d\n",getans(t));
        update(t);
    }

    return 0;
}