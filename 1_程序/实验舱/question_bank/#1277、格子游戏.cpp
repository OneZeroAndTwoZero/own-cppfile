#include<bits/stdc++.h>
using namespace std;

int n,m;
int x,y,cura,curb;
char op;
int f[100005];

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int a,int b){
    f[find(b)] = find(a);
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
    for(int i = 1;i <= (n + 1) * n;i ++){
        f[i] = i;
    }
    for(int i = 1;i <= m;i ++){
        scanf("%d %d %c",&x,&y,&op);
        cura = x * n + y;
        if(op == 'D') curb = (x + 1) * n + y;
        else curb = x * n + y + 1;
        if(find(cura) == find(curb)){
            printf("%d\n",i);
            return 0;
        }else{
            merge(cura,curb);
        }
    }
    printf("draw\n");

    return 0;
}