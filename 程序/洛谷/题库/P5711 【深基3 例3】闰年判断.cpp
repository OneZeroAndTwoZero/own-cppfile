#include<bits/stdc++.h>
using namespace std;

int n;

bool ok(int x){
    if(x % 4 != 0) return 0;
    if(x % 100 == 0 && x % 400 != 0) return 0;
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    printf("%d\n",ok(n));

    return 0;
}