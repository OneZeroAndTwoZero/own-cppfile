#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,temp;
int a[__len(5)];

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
        scanf("%d",&a[i]);
    }
    sort(a,a + n);
    temp = a[1] - a[0];
    for(int i = 2;i < n;i ++){
        temp = __gcd(temp,a[i] - a[i - 1]);
    }
    if(temp == 0){
        printf("%d\n",n);
        return 0;
    }
    printf("%d\n",(a[n - 1] - a[0]) / temp + 1);

    return 0;
}