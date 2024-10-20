#include<bits/stdc++.h>
using namespace std;

int n,m,ans,cur;
int a[1005][1005],sum[1005][1005];

bool ok_line(int x1,int y1,int x2,int y2,int k){
    if(x1 > x2) swap(x1,x2);
    if(y1 > y2) swap(y1,y2);
    int num = sum[x2][y2] - sum[x1 - 1][y2]
    - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
    // cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << k << " " << num << "[]\n";
    return num == k;
}

bool ok(int x,int y,int k){
    if(x <= k || y <= k) return 0;
    if(n - x < k || m - y < k) return 0;
    bool res = 1;
    res &= ok_line(x - k,y,x - 1,y,k);
    res &= ok_line(x + 1,y,x + k,y,k);
    res &= ok_line(x,y - k,x,y - 1,k);
    res &= ok_line(x,y + 1,x,y + k,k);
    return res;
}

bool check(int k){
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            if(!a[i][j]) continue;
            if(ok(i,j,k)){
                // cout << i << " ;; " << j << "\n";
                return 1;
            }
        }
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%d",&a[i][j]);
            if(a[i][j]) cur = 1;
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1]
            - sum[i - 1][j - 1] + a[i][j];
        }
    }
    int l = 1,r = min(n,m) / 2;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            // cout << mid << "[]\n";
            l = mid + 1;
            ans = mid;
        }else{
            r = mid - 1;
        }
    }
    ans += cur;
    printf("%d\n",ans);

	return 0;
}