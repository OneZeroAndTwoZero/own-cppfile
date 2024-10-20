#include<bits/stdc++.h>
using namespace std;

double a,c;
int b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %d %lf",&a,&b,&c);
    if(b) a *= 1.259;
    else a *= 2.423;
    printf("%.3lf ",a);
    if(a >= c) printf("Y\n");
    else printf("N\n");

	return 0;
}