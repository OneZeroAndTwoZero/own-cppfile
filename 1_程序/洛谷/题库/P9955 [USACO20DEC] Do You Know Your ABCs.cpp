#include<bits/stdc++.h>
using namespace std;

int a[15];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0;i < 7;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + 7);
    printf("%d %d ",a[0],a[1]);
    if(a[2] == a[0] + a[1]){
        printf("%d\n",a[3]);
    }else{
        printf("%d\n",a[2]);
    }

    return 0;
}