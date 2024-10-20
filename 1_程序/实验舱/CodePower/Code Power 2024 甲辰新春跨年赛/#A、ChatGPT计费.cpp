#include<bits/stdc++.h>
using namespace std;

int f,n;
double ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&f,&n);
    if(f){
        ans = ceil((double)n / 500);
    }else{
        ans = ceil((double)n / 750); 
    }
    printf("%.2lf\n",ans / 100.0);

    return 0;
}