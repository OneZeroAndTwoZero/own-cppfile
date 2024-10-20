#include<bits/stdc++.h>
using namespace std;

int n,m,k,q;
int op,l,r,c,t;
int a[205][205];
int cnt[500005];

void operate(int x1,int y1,int x2,int y2,int color,int t){
    for(int i = x1;i <= x2;i ++){
        for(int j = y1;j <= y2;j ++){
            if(t == 0){
                if(a[i][j] == 0) a[i][j] = color;
            }else{
                a[i][j] = color;
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&m,&k,&q);
    while(q --){
        scanf("%d %d %d %d %d",&op,&l,&r,&c,&t);
        if(op == 1){
            operate(l,1,r,m,c,t);
        }else{
            operate(1,l,n,r,c,t);
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            cnt[a[i][j]] ++;
        }
    }
    for(int i = 1;i <= k;i ++){
        printf("%d%c",cnt[i]," \n"[i == k]);
    }

	return 0;
}