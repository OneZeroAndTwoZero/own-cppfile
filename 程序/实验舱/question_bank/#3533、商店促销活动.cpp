#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n - 1;i ++){
        scanf("%d,",&a[i]);
    }
    scanf("%d",&a[n - 1]);
    sort(a,a + n);
    for(int i = 1;i < n;i += 2){
        ans += a[i];
    }
    printf("%d\n",ans);

	return 0;
}