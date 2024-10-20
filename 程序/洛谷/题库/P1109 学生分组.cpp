#include<bits/stdc++.h>
using namespace std;

int n,l,r,sum = 0,less_ = 0,more = 0;
int a[55] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif


    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    scanf("%d %d",&l,&r);
    if(sum > n * r || sum < n * l){
        printf("%d\n",-1);
    }else{
        for(int i = 0;i < n;i ++){
            if(a[i] < l) less_ += l - a[i];
            else if(a[i] > r) more += a[i] - r;
        }
        printf("%d\n",max(less_,more));
    }

    return 0;
}