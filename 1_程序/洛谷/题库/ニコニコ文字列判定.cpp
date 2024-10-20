#include<bits/stdc++.h>
using namespace std;

char a[5];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%s",&a);
    if(a[0] == a[2] && a[1] == a[3]){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}