#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[300005],min_[300005];
long long sum[300005];
double max_;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%lld",&a[i]);
        sum[i] = sum[i - 1] + a[i];
    }
    min_[n] = a[n];
    for(int i = n - 1;i > 0;i --){
        min_[i] = min(min_[i + 1],a[i]);
    }
    for(int i = 1;i <= n - 2;i ++){
        // cout << sum[n] - sum[i] << " " << min_[i + 1] << "[]\n";
        // cout << i << " " << (sum[n] - sum[i] - min_[i + 1]) / (double)(n - i - 1) << ";;;\n";
        if((sum[n] - sum[i] - min_[i + 1]) / (double)(n - i - 1) > max_){
            max_ = (sum[n] - sum[i] - min_[i + 1]) / (double)(n - i - 1);
            ans = i;
        }
    }
    printf("%d\n",ans);

	return 0;
}