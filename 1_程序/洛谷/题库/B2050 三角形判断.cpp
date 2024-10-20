#include<bits/stdc++.h>
using namespace std;

int a[15] = {0};

int main(){
    for(int i = 0;i < 3;i ++){
        scanf("%d",&a[i]);
    }
    sort(a,a + 3);
    printf("%d\n",a[0] + a[1] > a[2]);

    return 0;
}