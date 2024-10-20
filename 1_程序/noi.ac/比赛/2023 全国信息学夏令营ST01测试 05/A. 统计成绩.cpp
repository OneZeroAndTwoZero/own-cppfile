#include<bits/stdc++.h>
using namespace std;

int n;
double a[1005];
double avg,ans;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lf",&a[i]);
    }
    sort(a,a + n);
    for(int i = 1;i < n - 1;i ++){
        avg += a[i];
    }
    avg /= (n - 2);
    for(int i = 1;i < n - 1;i ++){
        ans = max(ans,abs(a[i] - avg));
    }
    printf("%.2lf %.2lf\n",avg,ans);

	return 0;
}
