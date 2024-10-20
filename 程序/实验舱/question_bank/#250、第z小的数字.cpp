#include<bits/stdc++.h>
using namespace std;

int n,q;
int op,x,y,z;
int a[20005],t[20005];

int qusort(int l,int r,int x){
    if(l >= r) return t[l];
    int p = t[l];
    int cntmin = 0,cntmax = 0;
    for(int i = l;i <= r;i ++){
        if(t[i] > p) cntmax ++;
        if(t[i] < p) cntmin ++;
    }
    if(x > cntmin && x <= ((r - l + 1) - cntmax)) return p;
    int pos = l;
    if(x <= cntmin){
        for(int i = l;i <= r;i ++){
            if(t[i] < p) t[pos ++] = t[i];
        }
        return qusort(l,pos - 1,x);
    }else{
        for(int i = l;i <= r;i ++){
            if(t[i] > p) t[pos ++] = t[i];
        }
        return qusort(l,pos - 1,x - ((r - l + 1) - cntmax));
    }
    return -1;
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
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d %d",&x,&y);
            a[x] = y;
        }else{
            scanf("%d %d %d",&x,&y,&z);
            for(int i = x;i <= y;i ++){
                t[i] = a[i];    
            }
            printf("%d\n",qusort(x,y,z));
        }
    }

    return 0;
}