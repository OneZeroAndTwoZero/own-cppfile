#include<bits/stdc++.h>
using namespace std;

int n,t,min_ = 100000,max_ = -1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&t);
        min_ = min(t,min_);
        max_ = max(max_,t);
    }
    printf("%d\n",max_ - min_);

    return 0;
}