#include<bits/stdc++.h>
using namespace std;

int n;
int h,m,s,u = 0,i = 0;
long long ans = 0,cur = 0;

long long gettime(int h,int m,int s){
    return h * 3600LL + m * 60LL + s;
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
    while(n --){
        scanf("%d:%d:%d",&h,&m,&s);
        ans += (gettime(h,m,s) - cur) * u * i;
        scanf("%d %d",&u,&i);
        cur = gettime(h,m,s);
    }
    printf("%lld\n",ans);

    return 0;
}