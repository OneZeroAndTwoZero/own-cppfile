#include<bits/stdc++.h>
using namespace std;

int n;
long long a[100005] = {0};

bool cmp(int a,int b){
    if(a == 3 * b) return 1;
    if(b == 3 * a) return 0;
    if(a == 2 * b) return 0;
    if(b == 2 * a) return 1;
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld",&a[i]);
    }
    sort(a,a + n,cmp);
    for(int i = 0;i < n;i ++){
        printf("%lld ",a[i]);
    }

	return 0;
}
