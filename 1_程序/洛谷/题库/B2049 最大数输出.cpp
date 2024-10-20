#include<bits/stdc++.h>
using namespace std;

int a,m;

int main(){
    scanf("%d",&a);
    m = a;
    for(int i = 1;i < 3;i ++){
        scanf("%d",&a);
        m = max(a,m);
    }
    printf("%d\n",m);

    return 0;
}