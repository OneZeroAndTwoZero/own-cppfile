#include<bits/stdc++.h>
using namespace std;

struct node{
    int ai,hi;
    bool operator < (const node &a) const{
        if(ai != a.ai) return ai < a.ai;
        return hi < a.hi;
    }
};

int T,n,q,c,pos,maxn;
int a[300005];
bool vis[300005];
node t[300005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d %d %d",&n,&q,&c);
        pos = 1,maxn = 1;
        for(int i = 1;i <= n;i ++){
            scanf("%d",&a[i]);
            if(a[i]) vis[i] = 1;
            else vis[i] = 0;
        }
        for(int i = 0;i < q;i ++){
            scanf("%d %d",&t[i].ai,&t[i].hi);
        }
        sort(t,t + q);
        bool ok = 1;
        for(int i = 0;i < q;i ++){
            for(;pos <= t[i].ai;pos ++){
                if(a[pos] == 0){
                    a[pos] = 1;
                }else{
                    maxn = max(maxn,a[pos]);
                }
            }
            // cout << t[i].hi << ";;" << maxn << "\n";
            if(maxn + 1 > c){
                ok = 0;
                break;
            }else if(!vis[t[i].hi]){
                a[t[i].hi] = maxn + 1;
            }else{
                if(maxn + 1 > a[t[i].hi]){
                    ok = 0;
                    break;
                }
            }
        }
        if(ok == 0){
            printf("-1\n");
            continue;
        }
        for(;pos <= n;pos ++){
            if(a[pos] == 0){
                a[pos] = 1;
            }
        }
        for(int i = 1;i <= n;i ++){
            printf("%d%c",a[i]," \n"[i == n]);
        }
    }

    return 0;
}