#include<bits/stdc++.h>
using namespace std;

struct node{
    char dat;
    int nxt;
};

int n,t1,t2,pos,t;
char ch;
node a[100005];
bool vis[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&t1,&t2,&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %c %d",&pos,&ch,&t);
        a[pos].dat = ch;
        a[pos].nxt = t;
    }
    for(int i = t1;i != -1;i = a[i].nxt){
        vis[i] = 1;
    }
    for(int i = t2;i != -1;i = a[i].nxt){
        if(vis[i]){
            printf("%05d\n",i);
            return 0;
        }
    }
    printf("-1\n");

    return 0;
}