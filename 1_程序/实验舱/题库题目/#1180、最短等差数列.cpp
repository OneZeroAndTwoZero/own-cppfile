#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int n,d;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + n);
    d = a[1] - a[0];
    for(int i = 2;i <= n;i ++){
        d = gcd(d,a[i] - a[i - 1]);
    }
    printf("%d\n",(a[n - 1] - a[0]) / d + 1);

	return 0;
}