#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
};

int n,m;
int sx,sy,ex,ey;
node a[200005];

int getans(){
    int cnt = 0;
    for(int i = 0;i < n;i ++){
        if(a[i].xi < sx || a[i].yi < sy) continue;
        if(a[i].xi > ex || a[i].yi > ey) continue;
        cnt ++;
    }
    return cnt;
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
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i].xi,&a[i].yi);
    }
    while(m --){
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        printf("%d\n",getans());
    }

	return 0;
}