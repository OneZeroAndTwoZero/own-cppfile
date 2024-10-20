#include<bits/stdc++.h>
using namespace std;

int a[5] = {0};
int cnt = 0;

int main(){
    for(int i = 0;i < 5;i ++) {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < 5;i ++){
        cnt += a[i] % 3;
        a[(i + 1) % 5] += a[i] / 3,a[(i + 4) % 5] += a[i] / 3;
        a[i] /= 3;
    }
    for(int i = 0;i < 5;i ++){
        printf("%d ",a[i]);
    }
    puts("");
    printf("%d\n",cnt);

    return 0;
}