#include<bits/stdc++.h>
using namespace std;

int n,m;
int a,b;
int f[200005] = {0};
int st[200005][80] = {0};

int cz(int x,int y){
    if(st[x][y] != -1) return st[x][y];
    if(y == 0){
        st[x][y] = f[x];
        return st[x][y];
    }
    int s = pow(2,y - 1);
    st[x][y] = max(cz(x,y - 1),cz(x + s,y - 1));
    return st[x][y];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= 58;j ++){
            st[i][j] = -1;
        }
    }
    for(int i = 1;i <= n;i ++){
        scanf("%d",&f[i]);
    }
    cz(1,(int)log2(n) + 1);
    scanf("%d",&m);
    while(m --){
        scanf("%d %d",&a,&b);
        int k = log2(b - a) + 1;
        int s = pow(2,k);
        printf("%d\n",max(st[a][k],st[b - s + 1][k]));
    }

	return 0;
}