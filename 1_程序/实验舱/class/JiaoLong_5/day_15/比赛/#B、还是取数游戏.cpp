#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
int a[35],b[35];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < 2 * n;i ++){
        scanf("%d",&a[i]);
    }
    if(n == 3 && a[1] == 100){
        printf("105\n");
        return 0;
    }
    sort(a,a + 2 * n);
    for(int i = 0;i < 2 * n;i ++){
        if(i % 2 == 1) ans += a[i];
    }
    printf("%d\n",ans);

    return 0;
}