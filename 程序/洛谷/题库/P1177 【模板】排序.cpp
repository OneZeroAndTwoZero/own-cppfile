#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        printf("%d ",a[i]);
    }
    puts("");

    return 0;
}