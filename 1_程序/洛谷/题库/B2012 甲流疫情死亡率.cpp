#include<bits/stdc++.h>
using namespace std;

int a,b;
double ans;

int main(){
    scanf("%d %d",&a,&b);
    ans = (double)b / a;
    printf("%.3lf%%\n",ans * 100.0);

    return 0;
}