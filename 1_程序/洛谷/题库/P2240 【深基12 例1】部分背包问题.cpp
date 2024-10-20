#include<bits/stdc++.h>
using namespace std;

struct node{
    int mi,vi;
    bool operator < (const node &a) const{
        return (double)vi / mi > (double)a.vi / a.mi;
    }
};

int n,t;
double ans = 0;
node a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&t);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i].mi,&a[i].vi);
    }
    sort(a,a + n);
    for(int i = 0;i < n && t != 0;i ++){
        ans += min(a[i].mi,t) * (double)a[i].vi / a[i].mi;
        t -= min(a[i].mi,t);
    }
    printf("%.2lf\n",ans);

    return 0;
}