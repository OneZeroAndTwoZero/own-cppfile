#include<bits/stdc++.h>
using namespace std;

char a[15];
int ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%s",&a);
    for(int i = 0;i < strlen(a);i ++){
        if(a[i] == '1') ans ++;
    }
    printf("%d\n",ans);

    return 0;
}