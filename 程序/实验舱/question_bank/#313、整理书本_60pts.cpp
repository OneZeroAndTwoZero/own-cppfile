#include<bits/stdc++.h>
using namespace std;

struct node{
    int pre,idx,nxt;
};

int n,m;
int op,p,q;
node a[100005];

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
        a[i].pre = i - 1;
        a[i].idx = i;
        a[i].nxt = i + 1;
    }
    a[0].nxt = 1,a[n + 1].pre = n;
    a[0].pre = a[n + 1].nxt = -1;
    while(m --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d",&p);
            a[a[p].pre].nxt = a[p].nxt;
            a[a[p].nxt].pre = a[p].pre;
            a[p].nxt = a[0].nxt;
            a[p].pre = 0;
            a[a[0].nxt].pre = p;
            a[0].nxt = p;
        }else if(op == 2){
            scanf("%d",&p);
            a[a[p].pre].nxt = a[p].nxt;
            a[a[p].nxt].pre = a[p].pre;
            a[p].pre = a[n + 1].pre;
            a[p].nxt = n + 1;
            a[a[n + 1].pre].nxt = p;
            a[n + 1].pre = p;
        }else{
            scanf("%d %d",&p,&q);
            a[a[p].pre].nxt = a[p].nxt;
            a[a[p].nxt].pre = a[p].pre;
            a[p].nxt = a[q].nxt;
            a[p].pre = q;
            a[a[q].nxt].pre = p;
            a[q].nxt = p;
        }
    }
    // for(int i = 0;i <= n + 1;i ++){
    //     printf("%d %d %d %d\n",i,a[i].pre,a[i].idx,a[i].nxt);
    // }
    int t = a[0].nxt;
    while(t != n + 1){
        printf("%d ",t);
        t = a[t].nxt;
    }

    return 0;
}