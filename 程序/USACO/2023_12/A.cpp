#include<bits/stdc++.h>
using namespace std;

struct node{
    int wi,ai;
    bool operator < (const node &a) const{
        return wi < a.wi;
    }
};

int n,m,k;
long long ans = 0;
int f[200005];
node a[200005];

void dfs(int pos,int num){
    ans += num;
    a[pos].ai -= num;
    for(int i = f[pos];i < n;i ++){
        if(!num) break;
        int t = min(num,a[i].ai);
        dfs(i,t);
        num -= t;
    }
}

int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i].wi,&a[i].ai);
    }
    sort(a,a + n);
    int r = 0;
    for(int i = 0;i < n;i ++){
        while(r < n && a[r].wi - a[i].wi < k){
            r ++;
        }
        if(a[r].wi - a[i].wi < k) f[i] = n;
        else f[i] = r;
    }
    for(int i = 0;i < n;i ++){
        int t = min(a[i].ai,m);
        dfs(i,t);
        m -= t;
    }
    printf("%lld\n",ans);

    return 0;
}
