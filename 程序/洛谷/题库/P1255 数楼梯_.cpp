#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005] = {1};
int b[10005] = {1};

void cz(){
    swap(a,b);
    for(int i = 0;i < 5005;i ++){
        a[i] += b[i];
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    if(n == 1){
        printf("1\n");
        return 0;
    }
    for(int i = 2;i <= n;i ++){
        cz();
    }
    bool f0 = 0;
    for(int i = 5005;i >= 0;i --){
        if(f0 || a[i] != 0){
            f0 = 1;
            printf("%d",a[i]);
        }
    }

	return 0;
}