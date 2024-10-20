#include<bits/stdc++.h>
using namespace std;

int a[1005],b[1005];
char ca[1005],cb[1005];
int l1,l2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%s",&ca);
    scanf("%s",&cb);
    l1 = strlen(ca),l2 = strlen(cb);
    for(int i = 0;i < l1;i ++){
        a[i] = ca[l1 - i - 1] - '0';
    }
    for(int i = 0;i < l2;i ++){
        b[i] = cb[l2 - i - 1] - '0';
    }
    for(int i = 0;i < max(l1,l2);i ++){
        a[i] += b[i];
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    if(a[max(l1,l2)] != 0){
        l1 ++,l2 ++;
    }
    for(int i = max(l1,l2) - 1;i >= 0;i --){
        printf("%d",a[i]);
    }

	return 0;
}
