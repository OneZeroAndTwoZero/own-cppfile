#include<bits/stdc++.h>
using namespace std;

int n;
long long a[1005];
unordered_map<long long,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++) scanf("%lld",&a[i]);
    for(int i = 0;i < n;i ++)
        for(int j = i + 1;j < n;j ++)
            for(int k = j + 1;k < n;k ++)
                f[a[i] * a[j] * a[k]] ++;
    printf("%d\n",f.size());

	return 0;
}