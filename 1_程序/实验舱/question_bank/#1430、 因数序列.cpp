#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,n,t;
long long tem;
vector<int> a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        a.clear(),b.clear();
        scanf("%d",&n);
        for(int i = 0;i < n;i ++){
            scanf("%d",&t);
            a.push_back(t);
        }
        sort(a.begin(),a.end());
        tem = 1LL * a[0] * a[a.size() - 1];
        for(int i = 2;i <= tem / i;i ++){
            if(tem % i) continue;
            b.push_back(i);
            if(tem / i != i) b.push_back(tem / i);
        }
        sort(b.begin(),b.end());
        if(a != b) tem = -114514;
        if(tem != -114514) printf("%lld\n",tem);
        else printf("-1\n");
    }

    return 0;
}