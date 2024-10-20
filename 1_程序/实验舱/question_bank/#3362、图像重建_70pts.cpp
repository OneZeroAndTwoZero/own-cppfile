#include<bits/stdc++.h>
using namespace std;

int n,m,r,c,ans = 0;
int a[55][55],b[55][55];

bool check(int x,int y){
    for(int i = 0;i < n - x && i < r;i ++){
        for(int j = 0;j < m - y && j < c;j ++){
            if(a[i + x][j + y] != b[i][j]) return 0;
        }
    }
    return 1;
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
        for(int j = 0;j < m;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&r,&c);
    for(int i = 0;i < r;i ++){
        for(int j = 0;j < c;j ++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(!check(i,j)) continue;
            ans = max(ans,(min(r,n - i)) * (min(c,m - j)));
        }
    }
    swap(a,b);
    swap(n,r),swap(m,c);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if(!check(i,j)) continue;
            ans = max(ans,(min(r,n - i)) * (min(c,m - j)));
        }
    }
    printf("%d\n",ans);

    return 0;
}