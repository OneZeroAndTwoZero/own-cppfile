#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int ans = 0;
int endy,endm,endd;
int y = 1970,m = 1,d = 1;
int day[15] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool check(){
    if(y > endy) return 1;
    if(y < endy) return 0;
    if(m > endm) return 1;
    if(m < endm) return 0;
    if(d > endd) return 1;
    return 0;
}

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

    scanf("%d %d %d",&endy,&endm,&endd);
    while(!check()){
        ans ++;
        operate();
    }
    printf("%d\n",ans);

    return 0;
}