#include<bits/stdc++.h>
using namespace std;

int n,q;
int a[200005] = {0};
int ki[200005],mi[200005];
long long sum[200005] = {0};
bool same = 1;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&q);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + n);
    for(int i = 0;i < q;i ++){
        scanf("%d %d",&ki[i],&mi[i]);
        if(i != 0 && ki[i] != ki[i - 1]) same = 0;
    }
    if(same){
        int k = ki[0];
        for(int i = 0;i < n;i ++){
            if(a[i] <= k){
                sum[i + 1] = a[i];
            }else{
                sum[i + 1] = k - (a[i] - k);
            }
        }
        sort(sum + 1,sum + 1 + n);
        for(int i = 1;i <= n;i ++){
            sum[i] += sum[i - 1];
        }
    }
    for(int i = 0;i < q;i ++){
        int k = ki[i],m = mi[i];
        if(q <= 1005 && n <= 1005){
            long long ans = 0;
            int t[1006] = {0};
            for(int i = 0;i < n;i ++){
                if(a[i] <= k) t[i] = a[i];
                else t[i] = k - (a[i] - k);
            }
            sort(t,t + n);
            for(int i = 0;i < m;i ++){
                ans += t[i];
            }
            printf("%lld\n",ans);
        }
        else if(same){
            printf("%lld\n",sum[m]);
        }
    }
    

	return 0;
}