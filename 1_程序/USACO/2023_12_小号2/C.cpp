#include<bits/stdc++.h>
using namespace std;

struct node{
    int ti;
    long long val;
    bool operator < (const node &a) const{
        if(val != a.val) return val > a.val;
        return ti > a.ti;
    }
};

int T,n;
long long h[200005],a[200005];
int t[200005];
long long ans = -1,l = 0,r = 1000000000;
node arr[200005];

bool check(long long x){
    for(int i = 0;i < n;i ++){
        arr[i].ti = t[i];
        arr[i].val = h[i] + a[i] * x;
    }
    sort(arr,arr + n);
    for(int i = 0;i < n;i ++){
        if(i != arr[i].ti) return 0;
    }
    return 1;
}

int main(){
    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        for(int i = 0;i < n;i ++){
            scanf("%lld",&h[i]);
        }
        for(int i = 0;i < n;i ++){
            scanf("%lld",&a[i]);
        }
        for(int i = 0;i < n;i ++){
            scanf("%d",&t[i]);
        }
        l = 0,r = 1000000001,ans = -1;
        while(l <= r){
            long long mid = (l + r) >> 1;
            if(check(mid)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        printf("%lld\n",ans);
    }

    return 0;
}
