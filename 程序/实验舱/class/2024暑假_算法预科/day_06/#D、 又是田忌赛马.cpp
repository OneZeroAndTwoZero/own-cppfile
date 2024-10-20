#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
int a[__len(5)],b[__len(5)];

int solvesmall(){
    sort(a,a + n);
    sort(b,b + n);
    int res = 0,l = 0,r = n - 1,ll = 0,rr = n - 1;
    for(int i = 0;i < n;i ++){
        if(a[l] <= b[ll]){
            l ++,ll ++;
        }else{
            r --,ll ++;
            res ++;
        }
    }
    return res;
}

int solvebig(){
    sort(a,a + n,greater<int>());
    sort(b,b + n,greater<int>());
    int res = 0,l = 0,r = n - 1,ll = 0,rr = n - 1;
    for(int i = 0;i < n;i ++){
        if(a[l] > b[ll]){
            l ++,ll ++;
            res ++;
        }else{
            r --,ll ++;
        }
    }
    return res;
}

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
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&b[i]);
    }
    printf("%d %d\n",solvebig(),solvesmall());

    return 0;
}