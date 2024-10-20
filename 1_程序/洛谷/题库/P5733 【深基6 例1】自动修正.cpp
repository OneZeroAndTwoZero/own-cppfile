#include<bits/stdc++.h>
using namespace std;

char a[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%s",&a);
    for(int i = 0;i < strlen(a);i ++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] -= 32;
        }
    }
    printf("%s\n",a);

    return 0;
}