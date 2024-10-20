#include<bits/stdc++.h>
using namespace std;

int a,ans;

int main(){
    for(int i = 0;i < 3;i ++){
        scanf("%d",&a);
        ans += a < 60;
    }
    printf("%d\n",ans == 1);

    return 0;
}