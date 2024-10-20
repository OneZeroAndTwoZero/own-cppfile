#include<bits/stdc++.h>
using namespace std;

int x;
bool ok1,ok2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&x);
    ok1 = x % 2 == 0;
    ok2 = x > 4 && x <= 12;
    printf("%d %d %d %d\n",ok1 && ok2,ok1 || ok2,ok1 ^ ok2,!ok1 && !ok2);

    return 0;
}

