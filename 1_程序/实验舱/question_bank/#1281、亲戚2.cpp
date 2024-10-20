#include<bits/stdc++.h>
using namespace std;

int n,m;
char op;
int x,y;
int f[100005];
int cnt[100005];

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int a,int b){
    int fa = find(a),fb = find(b);
    if(fa == fb) return;
    if(cnt[fa] < cnt[fb]) swap(fa,fb);
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

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        f[i] = i;
        cnt[i] = 1;
    }
    while(m --){
        scanf(" %c %d",&op,&x);
        if(op == 'M'){
            scanf("%d",&y);
            merge(x,y);
        }else{
            printf("%d\n",cnt[find(x)]);
        }
    }

    return 0;
}