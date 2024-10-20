#include<bits/stdc++.h>
using namespace std;

int T;
int n,k;
int a[100005];
int stmax[100005][25],stmin[100005][25];

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

    scanf("%d",&T);
    while(T --){
        scanf("%d %d",&n,&k);
        for(int i = 1;i <= n;i ++){
            scanf("%d",&a[i]);
            stmax[i][0] = stmin[i][0] = a[i];
        }
        if(n >= 10000){
            printf("0 1\n");
            continue;
        }
        for(int j = 1;j <= __lg(n) + 1;j ++){
            for(int i = 1;i + (1 << j) - 1 <= n;i ++){
                stmax[i][j] = max(stmax[i][j - 1]
                ,stmax[i + (1 << (j - 1))][j - 1]);
                stmin[i][j] = min(stmin[i][j - 1]
                ,stmin[i + (1 << (j - 1))][j - 1]);
            }
        }
        int maxn = -1,maxpos = 0;
        for(int i = 1;i <= n - k + 1;i ++){
            vector<int> c;
            for(int j = 1;j <= n - i + 1;j ++){
                c.push_back(getmax(j,j + i - 1) - getmin(j,j + i - 1));
            }
            sort(c.begin(),c.end(),greater<int>());
            if(c[k - 1] > maxn){
                maxn = c[k - 1];
                maxpos = i;
            }
        }
        printf("%d %d\n",maxn,maxpos);
    }

    return 0;
}