#include<bits/stdc++.h>
using namespace std;

struct node{
    int data,next;
};

int f[200005] = {0};
node a[200005];
int cnt[200005] = {0};
int n,m,p = 1;
int u,v;
int head = 0;

void cha(int idx,int k,int h){
    while(a[h].data != k){
        h = a[h].next;
    }
    a[idx].next = a[h].next;
    a[h].next = idx;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    f[0] = 0;
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&u,&v);
        cnt[v] ++;
        a[p].data = u;
        a[p].next = v;
        f[u] = p;
        p ++;
    }
    for(int i = 1;i < p;i ++){
        a[i].next = f[a[i].next];
        if(!cnt[a[i].data]) a[head].next = i;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        a[p].data = v;
        cha(v,u,head);
        p ++;
    }
    while(a[head].next != 0){
        head = a[head].next;
        printf("%d\n",a[head].data);
    }

	return 0;
}