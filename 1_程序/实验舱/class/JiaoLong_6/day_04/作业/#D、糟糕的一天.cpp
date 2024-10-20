#include<bits/stdc++.h>
using namespace std;

int n;
int h[1000005];
int f[1000005];
long long ans = 0;
stack<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&h[i]);
    }
    for(int i = 1;i <= n;i ++){
        while(s.size() && h[i] >= h[s.top()]){
            f[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(s.size()){
        f[s.top()] = n + 1;
        s.pop();
    }
    for(int i = 1;i <= n;i ++){
        // cout << i << " " << f[i] << "[]\n";
        ans += (f[i] - i - 1);
    }
    printf("%lld\n",ans);

	return 0;
}