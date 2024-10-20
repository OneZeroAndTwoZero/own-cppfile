#include<bits/stdc++.h>
using namespace std;

int n,p,ans = 10000000;
int x,y,z;
int a[5000006] = {0},d[5000006] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&p);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        d[i] = a[i] - a[i - 1];
    }
    while(p --){
        scanf("%d %d %d",&x,&y,&z);
        d[x] += z,d[y + 1] -= z;
    }
    for(int i = 1;i <= n;i ++){
        a[i] = d[i] + a[i - 1];
        ans = min(ans,a[i]);
    }
    printf("%d\n",ans);

    return 0;
}