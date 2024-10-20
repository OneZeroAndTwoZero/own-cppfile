#include<bits/stdc++.h>
using namespace std;

int n;
int a[200][200];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < 2 * n - 1;i ++){
        for(int k = 0;k < n;k ++){
            int j = i - k;
            if(j >= 0 && j < n) printf("%d ",a[k][j]);
        }
    }
    printf("\n");
    
    return 0;
}