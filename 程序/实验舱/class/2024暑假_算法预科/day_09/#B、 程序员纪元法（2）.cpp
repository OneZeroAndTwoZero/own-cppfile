#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
int y = 1969,m = 12,d = 31;
int day[15] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int getdaytime(int y,int m){
    if(m != 2) return day[m];
    if(y % 400 == 0 || (y % 100 && y % 4 == 0)) return 29;
    return 28;
}

void operate(){
    d ++;
    if(d > getdaytime(y,m)){
        m ++,d = 1;
    }
    if(m > 12){
        y ++,m = 1;
    }
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
    while(n --){
        operate();
    }
    printf("%d %d %d\n",y,m,d);

    return 0;
}