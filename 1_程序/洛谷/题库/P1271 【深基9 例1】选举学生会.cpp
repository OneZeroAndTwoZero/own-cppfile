#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[10000005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + m);
    for(int i = 0;i < m;i ++){
        printf("%d ",a[i]);
    }


    return 0;
}