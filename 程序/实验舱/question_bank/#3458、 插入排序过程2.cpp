#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int a[10005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i < n;i ++){
        for(int j = i + 1;j > 1;j --){
            if(a[j - 1] > a[j]) break;
            swap(a[j - 1],a[j]);
        }
        for(int j = 1;j <= n;j ++){
            printf("%d%c",a[j]," \n"[j == n]);
        }
    }

    return 0;
}