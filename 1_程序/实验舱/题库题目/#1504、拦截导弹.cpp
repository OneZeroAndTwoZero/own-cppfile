#include<bits/stdc++.h>
using namespace std;

int n,pos,ans1 = 1,ans2 = 1;
int a[300005] = {0};
int t[300005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%d",&a[n])) n ++;
    for(int i = 0;i < n;i ++){
        pos = upper_bound(t,t + ans1,a[i],greater<int>()) - t;
        if(pos == ans1 || t[pos] < a[i]) t[pos] = a[i];
        ans1 = max(pos + 1,ans1);
    }
    printf("%d\n",ans1);
    for(int i = 0;i < n;i ++){
        pos = lower_bound(t,t + ans2,a[i]) - t;
        if(pos == ans2 || t[pos] > a[i]) t[pos] = a[i];
        ans2 = max(pos + 1,ans2);
    }
    printf("%d\n",ans2);

	return 0;
}