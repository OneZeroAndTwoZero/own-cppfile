#include<bits/stdc++.h>
using namespace std;

long long a,b,c,d,e,f,g,p,ans = 0;
int sx,sy,ex,ey;

long long getnum(int x,int y){
    long long res = 0;
    res += a * x * x * x;
    res += b * y * y * y;
    res += c * x * x * y;
    res += d * x * y * y;
    res += e * x * y;
    res += f * x;
    res += g * y;
    return res % p;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&g,&p);
    scanf("%d %d %d %d",&sx,&ex,&sy,&ey);
    for(int i = sx;i <= ex;i ++){
        for(int j = sy;j <= ey;j ++){
            ans = max(ans,getnum(i,j));
        }
    }
    printf("%lld\n",ans);

    return 0;
}