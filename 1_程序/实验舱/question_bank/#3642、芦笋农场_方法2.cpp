#include<bits/stdc++.h>
using namespace std;

struct node{
    long long id,st,val;
    bool operator < (const node &a) const{
        return id > a.id;
    }
};

long long T,n;
node a[200005];

long long operate(long long a,long long b){
    return (a + b - 1) / b;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&T);
    while(T --){
        scanf("%lld",&n);
        for(long long i = 0;i < n;i ++){
            scanf("%lld",&a[i].st);
        }
        for(long long i = 0;i < n;i ++){
            scanf("%lld",&a[i].val);
        }
        for(long long i = 0;i < n;i ++){
            scanf("%lld",&a[i].id);
        }
        sort(a,a + n);
        long long ans = 0;
        for(int i = 1;i < n;i ++){
            long long cur = (a[i].st + a[i].val * ans) - (a[i - 1].st + a[i - 1].val * ans);
            if(cur > 0) continue;
            if(a[i].val <= a[i - 1].val){
                ans = -1;
                break;
            }
            ans += operate(cur + 1,a[i - 1].val - a[i].val);
        }
        for(int i = 1;i < n;i ++){
            long long cur = (a[i].st + a[i].val * ans) - (a[i - 1].st + a[i - 1].val * ans);
            if(cur <= 0){
                ans = -1;
                break;
            }
        }
        printf("%lld\n",ans);
    }

    return 0;
}