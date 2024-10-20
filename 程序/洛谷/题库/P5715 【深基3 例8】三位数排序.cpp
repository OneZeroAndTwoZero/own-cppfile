#include<bits/stdc++.h>
using namespace std;

int a[3] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    for(int i = 0;i < 3;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + 3);
    for(int i = 0;i < 3;i ++){
        printf("%d ",a[i]);
    }

    return 0;
}