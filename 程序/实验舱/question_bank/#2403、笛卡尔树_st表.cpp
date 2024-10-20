#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000006];
int st[1000006][35];
int fa[1000006];

int getmin(int l,int r){
    int len = r - l + 1;
    if(a[st[l][__lg(len)]] < a[st[r - (1 << __lg(len)) + 1][__lg(len)]]){
        return st[l][__lg(len)];
    }else{
        return st[r - (1 << __lg(len)) + 1][__lg(len)];
    }
}

void dfs(int l,int r,int f){
    if(r < l) return;
    int pos = getmin(l,r);
    fa[pos] = f;
    dfs(l,pos - 1,pos);
    dfs(pos + 1,r,pos);
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
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        st[i][0] = i;
    }
    for(int j = 1;j <= __lg(n);j ++){
        for(int i = 1;i + (1 << j) - 1 <= n;i ++){
            if(a[st[i][j - 1]] < a[st[i + (1 << (j - 1))][j - 1]]){
                st[i][j] = st[i][j - 1];
            }else{
                st[i][j] = st[i + (1 << (j - 1))][j - 1];
            }
        }
    }
    dfs(1,n,0);
    for(int i = 1;i <= n;i ++){
        printf("%d%c",fa[i]," \n"[i == n]);
    }

    return 0;
}