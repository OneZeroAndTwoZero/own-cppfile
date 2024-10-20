#include<bits/stdc++.h>
using namespace std;

int n,x,y;
char op;
int cnt[30005];
// use dis to show that how many blocks above a block
int dis[30005];
int f[30005];

int find(int x){
    if(f[x] == x) return x;
    // update father
    int fa = find(f[x]);
    dis[x] += dis[f[x]];
    f[x] = fa;
    return f[x];
}

// a above b
void merge(int a,int b){
    int fa = find(a),fb = find(b);
    if(fa == fb) return;
    dis[fb] += cnt[fa];
    cnt[fa] += cnt[fb];
    f[fb] = fa;
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
    for(int i = 1;i <= 30000;i ++){
        f[i] = i;
        cnt[i] = 1;
    }
    while(n --){
        scanf(" %c %d",&op,&x);
        if(op == 'M'){
            scanf("%d",&y);
            merge(x,y);
        }else{
            int fa = find(x);
            printf("%d\n",cnt[fa] - dis[x] - 1);
        }
    }

    return 0;
}