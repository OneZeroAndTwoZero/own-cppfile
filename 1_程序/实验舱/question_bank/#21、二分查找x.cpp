#include<bits/stdc++.h>
using namespace std;

int n,x,ans;
int a[10005];

int binary_search(int x){
    int l = 1,r = n;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(a[mid] == x) return mid;
        if(x > a[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&x);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i]);
    }
    ans = binary_search(x);
    if(ans == -1) printf("no\n");
    else printf("%d\n",ans);

    return 0;
} 
