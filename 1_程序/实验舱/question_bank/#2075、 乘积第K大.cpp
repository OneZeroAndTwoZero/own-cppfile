#include<bits/stdc++.h>
using namespace std;

int n;
long long k, t1, t2, ans = -1;
vector<long long> sa, sb;
long long l = 0, r = 1000000000000000001;

bool check(long long x){ // is num >= k
    long long res = sb.size() * sa.size();
    for (auto && i : sa){
        long long cur = (x - 1) / i + 1;
        res -= lower_bound(sb.begin(),sb.end(),cur) - sb.begin();
    }
    return res >= k;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %lld", &n, &k);
    for (int i = 0; i < n; i ++){
        scanf("%lld %lld", &t1, &t2);
        sa.push_back(t1);
        sb.push_back(t2);
    }
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());
    while (l <= r){
        long long mid = (l + r) >> 1;
        if (check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%lld\n", ans);

    return 0;
}