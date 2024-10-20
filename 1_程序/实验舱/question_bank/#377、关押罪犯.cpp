#include<bits/stdc++.h>
using namespace std;

struct node{
    int ui,vi,wi;
    bool operator < (const node &a) const{
        return wi > a.wi;
    }
};

int n,m;
node a[100005];
int f[40005];

int find(int x){
    if(f[x] == x) return x;
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x,int y){
    int fx = find(x),fy = find(y);
    f[fx] = fy;
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
    for(int i = 1;i < n * 2;i ++){
        f[i] = i;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&a[i].ui,&a[i].vi,&a[i].wi);
    }
    sort(a,a + m);
    for(int i = 0;i < m;i ++){
        if(find(a[i].ui) == find(a[i].vi)){
            printf("%d\n",a[i].wi);
            return 0;
        }
        merge(a[i].ui,a[i].vi + n);
        merge(a[i].vi,a[i].ui + n);
    }
    printf("0\n");

    return 0;
}