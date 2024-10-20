#include<bits/stdc++.h>
using namespace std;

int a,b,x,y;

int exgcd(int a,int b,int &x,int &y){
    if(b == 0){
        x = 1,y = 0;
        return a;
    }
    int res = exgcd(b,a % b,y,x);
    y -= a / b * x;
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
    
    scanf("%d %d",&a,&b);
    exgcd(a,b,x,y);
    printf("%d\n",(x + b) % b);

    return 0;
}
