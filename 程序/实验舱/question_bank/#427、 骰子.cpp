#include<bits/stdc++.h>
using namespace std;

int a[5];
int maxpos = -1;
long long sum[300005], ans[300005];
long long maxn = -1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &a[1], &a[2], &a[3]);
    sort(a + 1, a + 3 + 1);
    for (int i = 2; i <= a[1] + a[2]; i ++){
        if (i <= a[1]) sum[i] = i - 1;
        else if (i > a[2] + 1) sum[i] = a[1] + a[2] - i + 1;
        else sum[i] = a[1];
        // cout << i << " " << sum[i] << "[]\n";
        sum[i] += sum[i - 1];
    }
    for (int i = a[1] + a[2] + 1; i <= a[1] + a[2] + a[3]; i ++){
        sum[i] = sum[i - 1];
    }
    for (int i = 3; i <= a[1] + a[2] + a[3]; i ++){
        ans[i] = sum[i - 1] - sum[max(0,i - a[3] - 1)];
        // cout << i << ";;;" << ans[i] << "\n";
        if (ans[i] <= maxn) continue;
        maxn = ans[i],maxpos = i;
    }
    printf("%d\n",maxpos);

    return 0;
}