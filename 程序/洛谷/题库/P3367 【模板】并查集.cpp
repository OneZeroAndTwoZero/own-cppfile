#include<bits/stdc++.h>
using namespace std;

int f[1000005];
int cnt[1000005];
int op,n,m,a,b;

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int a,int b){
    int fa = find(a),fb = find(b);
    if(cnt[fa] < cnt[fb]){
        swap(fa,fb);
    }
    f[fb] = fa;
    cnt[fb] += cnt[fa];
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
    for(int i = 1;i <= n;i++){
        f[i] = i;
        cnt[i] = 1;
    }
    while(m --){
        scanf("%d %d %d",&op,&a,&b);
        if(op == 1){
            merge(a,b);
        }else{
            if(find(a) == find(b)){
                printf("Y\n");
            }else{
                printf("N\n");
            }
        }
    }

    return 0;
}

