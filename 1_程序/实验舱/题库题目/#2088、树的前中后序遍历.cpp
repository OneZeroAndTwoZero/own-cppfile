#include<bits/stdc++.h>
using namespace std;

struct node{
    int val,l,r;
};

node a[1005];
int n,s = 1;

void qian(int x){
    if(x == 0) return;
    printf("%d ",a[x].val);
    qian(a[x].l);
    qian(a[x].r);
}

void mid(int x){
    if(x == 0) return;
    mid(a[x].l);
    printf("%d ",a[x].val);
    mid(a[x].r);
}

void hou(int x){
    if(x == 0) return;
    hou(a[x].l);
    hou(a[x].r);
    printf("%d ",a[x].val);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d %d %d",&a[i].val,&a[i].l,&a[i].r);
    }
    qian(s);
    printf("\n");
    mid(s);
    printf("\n");
    hou(s);
    printf("\n");

	return 0;
}
