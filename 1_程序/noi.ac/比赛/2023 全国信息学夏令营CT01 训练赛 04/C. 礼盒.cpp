#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    long long x;
    bool operator < (const node &a) const{
        return x > a.x;
    }
};

int n,x;
long long a[300005] = {0};
long long b[300005] = {0};
node d[300005] = {0};
long long ans = 0;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&x);
    for(int i = 0;i < n;i ++){
        scanf("%lld %lld",&a[i],&b[i]);
        d[i].x = a[i] - b[i];
        d[i].id = i;
    }
    sort(d,d + n);
    for(int i = 0;i < x;i ++){
        ans += a[d[i].id];
    }
    for(int i = x;i < n;i ++){
        ans += b[d[i].id];
    }
    printf("%lld\n",ans);

	return 0;
}