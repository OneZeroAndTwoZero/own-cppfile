#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T;
__int128 x,y,a,b;

void read(__int128 &x){
    // read a __int128 variable
    char c; bool f = 0;
    while(((c = getchar()) < '0' || c > '9') && c != '-');
    if(c == '-'){f = 1; c = getchar();}
    x = c - '0';
    while((c = getchar()) >= '0' && c <= '9')x = x * 10 + c - '0';
    if(f) x = -x;
}

void write(__int128 x){
    // print a __int128 variable
    if(x < 0){putchar('-'); x = -x;}
    if(x > 9)write(x / 10);
    putchar(x % 10 + '0');
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);
    // cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        read(x);read(a);read(y);read(b);
        __int128 temp = b * x - a * y;
        if(temp > 0) printf(">\n");
        else if(temp < 0) printf("<\n");
        else printf("=\n");
    }

    return 0;
}