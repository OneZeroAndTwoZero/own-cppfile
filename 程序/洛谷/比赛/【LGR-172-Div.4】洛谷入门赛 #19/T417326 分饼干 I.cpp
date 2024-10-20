#include<bits/stdc++.h>
using namespace std;

int a[10];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    sort(a,a + 3);
    if(a[0] + a[1] <= a[2]){
        printf("%d %d\n",a[2],a[0] + a[1]);
    }else{
        printf("%d %d\n",a[0] + a[1],a[2]);
    }

    return 0;
}