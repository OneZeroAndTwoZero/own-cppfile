#include<bits/stdc++.h>
using namespace std;

int n,cur,curx;
int a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    cur = a[0],curx = 0;
    for(int i = 1;i < n;i++){
        if(a[i] > cur){
            cur = a[i];
            curx = i;
        }
    } 
    for(int i = 0;i < n;i++){
        if(i == curx) continue;
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
} 
