#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    long long y,m,d;
};

node a,b;
long long l = 0,r = 1145141919810LL,ans = -1;

bool isr(long long x){
    if(x % 400 == 0) return 1;
    if(x % 100 == 0) return 0;
    if(x % 4 == 0) return 1;
    return 0;
}

bool issmaller(node a,node b){
    if(a.y < b.y) return 1;
    if(a.y > b.y) return 0;
    if(a.m < b.m) return 1;
    if(a.m > b.m) return 0;
    if(a.d <= b.d) return 1;
    return 0;
}

bool check(long long x){
    node temp = a;
    temp.y += x;
    if(isr(a.y) && a.m == 2 && a.d == 29){
        if(!isr(temp.y)) temp.d = 28;
    }
    if(issmaller(temp,b)) return 1;
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&a.y,&a.m,&a.d);
    scanf("%d %d %d",&b.y,&b.m,&b.d);
    while(l <= r){
        long long mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%lld\n",ans);

    return 0;
}