#include<bits/stdc++.h>
using namespace std;

int n,q;
int a[100005];
int stmax[100005][25],stmin[100005][25];
int x,y;

int getmax(int l,int r){
    return max(stmax[l][__lg(r - l + 1)]
    ,stmax[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]);
}

int getmin(int l,int r){
    return min(stmin[l][__lg(r - l + 1)]
    ,stmin[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&q);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        stmax[i][0] = stmin[i][0] = a[i];
    }
    for(int j = 1;j <= __lg(n) + 1;j ++){
        for(int i = 1;i + (1 << j) - 1 <= n;i ++){
            stmax[i][j] = max(stmax[i][j - 1]
                        ,stmax[i + (1 << (j - 1))][j - 1]);
            stmin[i][j] = min(stmin[i][j - 1]
                        ,stmin[i + (1 << (j - 1))][j - 1]);
        }
    }
    while(q --){
        scanf("%d %d",&x,&y);
        printf("%d\n",getmax(x,y) - getmin(x,y));
    }

    return 0;
}