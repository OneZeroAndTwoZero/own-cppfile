#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[50000005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    nth_element(a,a + k - 1,a + n);
    printf("%d\n",a[k - 1]);

	return 0;
}
