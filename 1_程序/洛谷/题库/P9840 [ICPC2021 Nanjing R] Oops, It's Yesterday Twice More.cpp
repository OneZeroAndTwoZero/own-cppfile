#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,a,b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&a,&b);
    if(a <= n / 2 && b <= n / 2){
        for(int i = 1;i < n;i ++){
            printf("UL");
        }
        for(int i = 1;i < a;i ++) printf("D");
        for(int i = 1;i < b;i ++) printf("R");
    }else if(a > n / 2 && b <= n / 2){
        for(int i = 1;i < n;i ++){
            printf("DL");
        }
        for(int i = 1;i < n - a + 1;i ++) printf("U");
        for(int i = 1;i < b;i ++) printf("R");
    }else if(a <= n / 2 && b > n / 2){
        for(int i = 1;i < n;i ++){
            printf("UR");
        }
        for(int i = 1;i < a;i ++) printf("D");
        for(int i = 1;i < n - b + 1;i ++) printf("L");
    }else if(a > n / 2 && b > n / 2){
        for(int i = 1;i < n;i ++){
            printf("DR");
        }
        for(int i = 1;i < n - a + 1;i ++) printf("U");
        for(int i = 1;i < n - b + 1;i ++) printf("L");
    }

    return 0;
}