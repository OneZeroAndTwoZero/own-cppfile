#include<bits/stdc++.h>
using namespace std;

long long x;
vector<long long> ans;

long long sum(long long x){
    long long res = 0;
    while(x){
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&x);
    for(int i = 0;i <= 200;i ++){
        if(sum(x - i) == i){
            ans.push_back(x - i);
        }
    }
    sort(ans.begin(),ans.end());
    printf("%d\n",ans.size());
    for(int i = 0;i < ans.size();i ++){
        printf("%lld\n",ans[i]);
    }

	return 0;
}