#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    long long z,m;
};

long long a,b,l;
node ans = {100000,1};

node min_(node a,node b){
    long long mu = a.m * b.m,zi = a.z * b.m - a.m * b.z;
    long long tem = __gcd(abs(zi),mu);
    // printf("%lld %lld;;\n",zi,mu);
    return {zi / tem,mu / tem};
}

bool isbigger(node a,node b){
    node tem = min_(a,b);
    return tem.z >= 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&a,&b,&l);
    for(long long x = 1;x <= l;x ++){
        for(long long y = 1;y <= l;y ++){
            if(!isbigger({x,y},{a,b})) continue;
            if(!isbigger(min_({x,y},{a,b}),min_(ans,{a,b}))) ans = {x,y};
        }
    }
    printf("%lld %lld\n",ans.z,ans.m);

    return 0;
}