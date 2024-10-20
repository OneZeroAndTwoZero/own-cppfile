#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
using namespace std;

int n,m;
int op,sx,sy,ex,ey;
long long x,d[5][2505][2505];

void update(int x,int y,long long val){
    if(x > n || y > m) return;
    for(int i = x;i <= n;i += lowbit(i)){
        for(int j = y;j <= m;j += lowbit(j)){
            d[0][i][j] += val;
            d[1][i][j] += val * x;
            d[2][i][j] += val * y;
            d[3][i][j] += val * x * y;
        }
    }
}

void add(int sx,int sy,int ex,int ey,long long val){
    update(ex + 1,ey + 1,val);
    update(sx,ey + 1,-val);
    update(ex + 1,sy,-val);
    update(sx,sy,val);
}

long long query(int x,int y){
    if(x == 0 || y == 0) return 0;
    long long res = 0;
    for(int i = x;i > 0;i -= lowbit(i)){
        for(int j = y;j > 0;j -= lowbit(j)){
            res += d[0][i][j] * (x + 1) * (y + 1)
                - d[1][i][j] * (y + 1)
                - d[2][i][j] * (x + 1)
                + d[3][i][j];
        }
    }
    return res;
}

long long search(int sx,int sy,int ex,int ey){
    long long res = 0;
    res += query(ex,ey);
    res -= query(sx - 1,ey);
    res -= query(ex,sy - 1);
    res += query(sx - 1,sy - 1);
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
    while(~scanf("%d %d %d %d %d",&op,&sx,&sy,&ex,&ey)){
        if(op == 1){
            scanf("%lld",&x);
            add(sx,sy,ex,ey,x);
        }else{
            printf("%lld\n",search(sx,sy,ex,ey));
        }
    }

    return 0;
}