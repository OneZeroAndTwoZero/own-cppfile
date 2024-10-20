#include<bits/stdc++.h>
using namespace std;

struct node{
    int q,ti;
    bool is_use;
};

node a[2000005];
int n,k,ans = 0,now = 0;
int typ,p,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d %d %d",&typ,&p,&t);
        if(typ == 0){
            a[k].q = p,a[k].ti = t;
            ans += p,k ++;
        }else{
            bool mar = 0;
            while(a[now].ti < t - 45 && now < k) now ++;
            for(int i = now;i < k;i ++){
                if(a[i].is_use || a[i].q < p) continue;
                a[i].is_use = 1,mar = 1;
                break;
            }
            if(!mar) ans += p;
        }
    }
    printf("%d\n",ans);

    return 0;
}