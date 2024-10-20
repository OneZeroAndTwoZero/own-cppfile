#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
long long sum,w,a[100005],b[2000006]; // 2e6

bool check(int x){
    for(int i = 0;;i ++){
        if(i + x > n) return 0;
        if(sum - (b[i + x] - b[i]) >= w) return 1;
    }
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

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%lld",&a[i]);
        w += a[i];
    }
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&b[i]);
        sum += b[i];
        b[i] += b[i - 1];
    }
    if(w > sum){
        printf("what a bad day!\n");
        return 0;
    }
    int l = 1,r = n;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%d\n",ans);

    return 0;
}
