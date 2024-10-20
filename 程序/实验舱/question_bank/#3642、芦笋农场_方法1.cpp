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
        long long minn = 0,maxn = 0x3f3f3f3f3f3f3f3f;
        for(long long i = 1;i < n;i ++){
            if(a[i - 1].st < a[i].st){
                if(a[i - 1].val <= a[i].val) continue;
                long long cur = operate(a[i].st - a[i - 1].st + 1,a[i - 1].val - a[i].val);
                maxn = min(maxn,cur);
            }else{
                if(a[i - 1].val >= a[i].val){
                    minn = 0x3f3f3f3f3f3f3f3f,maxn = 0;
                    break;
                }else{
                    long long cur = operate(a[i - 1].st - a[i].st + 1,a[i].val - a[i - 1].val);
                    minn = max(minn,cur);
                }
            }
        }
        if(minn > maxn){
            printf("-1\n");
        }else{
            printf("%lld\n",minn);
        }
    }

    return 0;
}