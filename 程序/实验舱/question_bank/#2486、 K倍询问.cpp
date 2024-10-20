#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,q,t;
long long pre = 1;
vector<int> a;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    scanf("%d",&q);
    while(q --){
        scanf("%d",&t);
        pre = *lower_bound(a.begin(),a.end(),(pre * t) 
                           % (a[a.size() - 1] + 1));
        printf("%lld\n",pre);
    }

    return 0;
}