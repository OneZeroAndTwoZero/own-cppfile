#include<bits/stdc++.h>
using namespace std;

int k,t;
int a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&k);
    a[1] = 1,a[2] = 1;
    for(int i = 3;i <= 41;i ++){
        a[i] = a[i - 1] + a[i - 2];
    }
    for(int i = 0;i < k;i ++){
        scanf("%d",&t);
        printf("%d\n",a[t]);
    }

    return 0;
}
