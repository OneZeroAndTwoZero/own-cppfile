#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int sx,sy,ex,ey;
int a[1005][1005];

bool check(int x){
    for(int i = sx;i + x - 1 <= ex;i ++){
        for(int j = sy;j + x - 1 <= ey;j ++){
            if(a[i + x - 1][j + x - 1] - a[i - 1][j + x - 1]
            - a[i + x - 1][j - 1] + a[i - 1][j - 1] == x * x){
                return 1;
            }
        }
    }
    return 0;
}

int operate(){
    int l = 1,r = min(ey - sy + 1,ex - sx + 1);
    int res = 0;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            res = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
            a[i][j] = a[i][j] + a[i - 1][j] + a[i][j - 1]
            - a[i - 1][j - 1];
        }
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        printf("%d\n",operate());
    }

	return 0;
}