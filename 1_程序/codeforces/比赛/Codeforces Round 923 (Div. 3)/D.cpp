#include<bits/stdc++.h>
using namespace std;

int T;
int n,q,l,r;
int a[200005];
int stmax[200005][35],stmin[200005][35];
int maxpos[200005][35],minpos[200005][35];

int getmax(int l,int r){
    if(stmax[l][__lg(r - l + 1)] > stmax[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]){
        return stmax[l][__lg(r - l + 1)];
    }else{
        return stmax[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)];
    }
}

int getmin(int l,int r){
    if(stmin[l][__lg(r - l + 1)] < stmin[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]){
        return stmin[l][__lg(r - l + 1)];
    }else{
        return stmin[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)];
    }
}

int getmaxpos(int l,int r){
    if(stmax[l][__lg(r - l + 1)] > stmax[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]){
        return maxpos[l][__lg(r - l + 1)];
    }else{
        return maxpos[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)];
    }
}

int getminpos(int l,int r){
    if(stmin[l][__lg(r - l + 1)] < stmin[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)]){
        return minpos[l][__lg(r - l + 1)];
    }else{
        return minpos[r - (1 << (__lg(r - l + 1))) + 1][__lg(r - l + 1)];
    }
}

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
        for(int i = 1;i <= n;i ++){
            scanf("%d",&a[i]);
            stmax[i][0] = stmin[i][0] = a[i];
            maxpos[i][0] = minpos[i][0] = i;
        }
        for(int j = 1;j <= __lg(n) + 1;j ++){
            for(int i = 1;i + (1 << j) - 1 <= n;i ++){
                if(stmax[i][j - 1] > stmax[i + (1 << (j - 1))][j - 1]){
                    stmax[i][j] = stmax[i][j - 1];
                    maxpos[i][j] = maxpos[i][j - 1];
                }else{
                    stmax[i][j] = stmax[i + (1 << (j - 1))][j - 1];
                    maxpos[i][j] = maxpos[i + (1 << (j - 1))][j - 1];
                }
            }
        }
        for(int j = 1;j <= __lg(n) + 1;j ++){
            for(int i = 1;i + (1 << j) - 1 <= n;i ++){
                if(stmin[i][j - 1] < stmin[i + (1 << (j - 1))][j - 1]){
                    stmin[i][j] = stmin[i][j - 1];
                    minpos[i][j] = minpos[i][j - 1];
                }else{
                    stmin[i][j] = stmin[i + (1 << (j - 1))][j - 1];
                    minpos[i][j] = minpos[i + (1 << (j - 1))][j - 1];
                }
            }
        }
        scanf("%d",&q);
        while(q --){
            scanf("%d %d",&l,&r);
            if(getmax(l,r) == getmin(l,r)){
                printf("-1 -1\n");
            }else{
                printf("%d %d\n",getmaxpos(l,r),getminpos(l,r));
            }
        }
        printf("\n");
    }

    return 0;
}