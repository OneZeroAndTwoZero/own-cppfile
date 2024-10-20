#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int xi,yi;
};

int n;
node a[__len(5)];
int maxx = -1e9,minx = 1e9,maxy = -1e9,miny = 1e9;

int getdis(node a,node b){
    return abs(a.xi - b.xi) + abs(a.yi - b.yi);
}

int getans(int len){
    int res = 0;
    for(int i = 0;i <= len;i ++){
        res = max(res,getdis(a[len],a[i]));
    }
    return res;
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
    scanf("%d %d",&a[0].xi,&a[0].yi);
    maxx = minx = a[0].xi;
    maxy = miny = a[0].yi;
    for(int i = 1;i < n;i ++){
        scanf("%d %d",&a[i].xi,&a[i].yi);
        if(n <= 1000) printf("%d\n",getans(i));
        else if(a[i].xi == a[0].xi){
            printf("%d\n",max(abs(a[i].yi - maxy),abs(a[i].yi - miny)));
        }else if(a[i].yi == a[0].yi){
            printf("%d\n",max(abs(a[i].xi - maxx),abs(a[i].xi - minx)));
        }
        maxx = max(maxx,a[i].xi);
        minx = min(minx,a[i].xi);
        maxy = max(maxy,a[i].yi);
        miny = min(miny,a[i].yi);
    }

    return 0;
}