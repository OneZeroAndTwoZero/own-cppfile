#include<bits/stdc++.h>
using namespace std;

int T;
long long n;
vector<long long> ans;

void putout(){
    for (auto && i : ans){
        printf("%lld ", i);
    }
    printf("\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &T);
    while (T --){
        scanf("%lld", &n);
        ans.clear();
        bool cur = 1 && n;
        long long power = 1;
        while (n){
            if (n % 3 == 2){
                cur = 0;
                break;
            }
            if (n % 3) ans.push_back(power);
            n /= 3;
            power *= 3;
        }
        if (cur) putout();
        else printf("-1\n");
    }

    return 0;
}