#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define lowbit(x) (x & -x)
using namespace std;

int n,cur = 100001;
int a[100005];
int c[200005];
long long ans = 0;

void update(int x,int val){
    for(int i = x;i <= 200003;i += lowbit(i)){
        c[i] += val;
    }
}

int query(int x){
    int res = 0;
    for(int i = x;i;i -= lowbit(i)){
        res += c[i];
    }
    return res;
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
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= 10;i ++){
        int t = 0;
        memset(c,0,sizeof(c));
        update(cur,1);
        for(int j = 1;j <= n;j ++){
            if(a[j] == i) t += 1;
            else t -= 1;
            ans += query(t + cur - 1);
            update(t + cur,1);
        }
    }
    printf("%lld\n",ans);

    return 0;
}