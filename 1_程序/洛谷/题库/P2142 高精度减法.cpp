#include<bits/stdc++.h>
using namespace std;

int a[100005],b[100005];
char ca[100005],cb[100005];
int l1,l2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%s",&ca);
    scanf("%s",&cb);
    if(strlen(cb) > strlen(ca) || strlen(cb) == strlen(ca) && strcmp(ca,cb) < 0){
        printf("-");
        swap(ca,cb);
    }
    l1 = strlen(ca),l2 = strlen(cb);
    for(int i = 0;i < l1;i ++){
        a[i] = ca[l1 - i - 1] - '0';
    }
    for(int i = 0;i < l2;i ++){
        b[i] = -1 * (cb[l2 - i - 1] - '0');
    }
    for(int i = 0;i < max(l1,l2);i ++){
        a[i] += b[i];
        if(a[i] < 0){
            a[i + 1] -= 1;
            a[i] += 10;
        }
    }
    bool f0 = 0;
    for(int i = l1;i >= 0;i --){
        if(i == 0) f0 = 1;
        if(f0 || a[i] != 0){
            f0 = 1;
            printf("%d",a[i]);
        }
    }

	return 0;
}
