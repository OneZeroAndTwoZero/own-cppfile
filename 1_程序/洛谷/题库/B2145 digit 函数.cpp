#include<bits/stdc++.h>
using namespace std;

char a[15];
int k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%s %d",&a,&k);
    printf("%c\n",a[strlen(a) - k]);

    return 0;
}