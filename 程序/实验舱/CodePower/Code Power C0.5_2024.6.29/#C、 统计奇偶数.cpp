#include<bits/stdc++.h>
using namespace std;

int t;
double num[2];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (~scanf("%d", &t)){
        num[t & 1] ++;
    }
    printf("%.2lf\%\n%.2lf\%\n", 
    num[1] / (num[1] + num[0]) * 100, num[0] / (num[1] + num[0]) * 100);

    return 0;
}