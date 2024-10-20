#include<bits/stdc++.h>
using namespace std;

int n,a,b;
long long ans = 500000,l = 0,r = 50000000;
int w[500005] = {0};

bool check(long long x){
    long long gs = 0;
    for(int i = 0;i < n;i++){
        gs += max(0LL,(long long)(ceil((w[i] - (x * a)) * 1.0 / (double)b)));
    }
    return gs <= x;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d",&n,&a,&b);
    for(int i = 0;i < n;i++){
        scanf("%d",&w[i]);
    }
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    printf("%lld\n",ans);

    return 0;
}

