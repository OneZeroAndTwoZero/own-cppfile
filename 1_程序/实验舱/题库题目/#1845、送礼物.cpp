#include<bits/stdc++.h>
using namespace std;

int n;
long long w,a[105],cnt = 0;
vector<long long> ans;

void dfs_left(int k,long long sum){
    if(k == (n >> 1)){
        if(sum <= w){
            if(ans[ans.size() - 1] != sum){
                ans.push_back(sum);
                // cout << sum << "[][]\n";
            }
        }
        return;
    }
    if(sum > w){
        return;
    }
    dfs_left(k + 1,sum);
    dfs_left(k + 1,sum + a[k]); 
}

void dfs_right(int k,long long sum){
    if(k == n){
        if(sum <= w){
            cnt = max(cnt,sum + ans[upper_bound(ans.begin(),ans.end(),w - sum) - ans.begin() - 1]);
        }
        return;
    }
    if(sum > w){
        return;
    }
    dfs_right(k + 1,sum);
    dfs_right(k + 1,sum + a[k]); 
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%lld %d",&w,&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }

    ans.push_back(0);
    dfs_left(0,0);
    dfs_right((n >> 1),0);
    printf("%lld\n",cnt);

	return 0;
}