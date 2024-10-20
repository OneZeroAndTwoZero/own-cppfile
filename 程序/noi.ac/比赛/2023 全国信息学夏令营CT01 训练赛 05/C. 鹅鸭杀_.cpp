#include<bits/stdc++.h>
using namespace std;

int n,k,num = 0;
int a[200005] = {0};
int cnt[200005] = {0};
long long ans = 0;
vector<int> id[100005];
int d[200005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        id[a[i]].push_back(i);
        num = max(num,a[i]);
    }

    for(int i = 0;i <= num;i ++){
        int pos = 0;
        for(auto && u : id[i]){
            pos ++;
            if(pos >= k){
                int l,r;
                r = id[i][pos - k];
                if(pos - k == 0) l = 1;
                else l = id[i][pos - k - 1] + 1;
                d[l] -= 1;
                d[r + 1] += 1;
            }
        }
    }
    for(int i = 1;i <= n;i ++){
        d[i] = d[i - 1] + d[i];
        ans += (n - i) + d[i];
    }
    
    printf("%lld\n",ans);

	return 0;
}