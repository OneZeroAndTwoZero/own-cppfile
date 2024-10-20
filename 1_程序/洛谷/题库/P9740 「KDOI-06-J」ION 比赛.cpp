#include<bits/stdc++.h>
using namespace std;

int n,sum = 0,t;
int a[100005],b[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i],&b[i]);
        sum += (100 / a[i]) * b[i];
    }
    scanf("%d",&t);
    if(sum >= t){
        printf("Already Au.\n");
        return 0;
    }
    t -= sum;
    for(int i = 0;i < n;i ++){
        int cur = ((t - 1) / (100 / a[i])) + 1;
        if(cur + b[i] > a[i]) printf("NaN\n");
        else printf("%d\n",cur);
    }

    return 0;
}