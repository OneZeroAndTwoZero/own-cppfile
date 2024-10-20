#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int a[1005];
int l[1005],r[1005];

void make(int pos,int size){
    int sizeleft = 0,sizeright = 0;
    size --;
    for(int i = 1;size > 0;i ++){
        for(int j = 0;j < (1 << i) && size > 0;j ++){
            if(j < (1 << i) / 2) sizeleft ++;
            else sizeright ++;
            size --;
        }
    }
    if(sizeleft){
        l[pos] = pos - sizeright - 1;
        make(pos - sizeright - 1,sizeleft);
    }
    if(sizeright){
        r[pos] = pos - 1;
        make(pos - 1,sizeright);
    }
}

void bfs(int st){
    queue<int> q;
    q.push(st);
    while(q.size()){
        int t = q.front();
        q.pop();
        if(!t) continue;
        printf("%d ",a[t]);
        q.push(l[t]);
        q.push(r[t]);
    }
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
    make(n,n);
    bfs(n);

    return 0;
}