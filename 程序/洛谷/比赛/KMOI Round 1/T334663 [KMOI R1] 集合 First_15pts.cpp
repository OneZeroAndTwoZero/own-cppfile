#include<bits/stdc++.h>
using namespace std;

long long n,mod = 911451407;
long long sum;
vector<int> now;

void operate(){
    int cur = 1,res = 0;
    for(int i = 0;i < now.size();i ++){
        res += cur * now[i];
        cur *= -1;
    }
    sum = (sum + res + mod) % mod;
}

void dfs(int r){
    if(r == 0){
        operate();
        return;
    }
    now.push_back(r);
    dfs(r - 1);
    now.pop_back();
    dfs(r - 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld",&n);
    dfs(n);
    printf("%lld\n",sum);

	return 0;
}