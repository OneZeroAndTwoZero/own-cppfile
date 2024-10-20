#include<bits/stdc++.h>
using namespace std;

int n,k,numok = 0,numnok = 0;
double sumok = 0,sumnok = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&k);
    for(int i = 1;i <= n;i ++){
        if(i % k){
            sumnok += i;
            numnok ++;
        }else{
            sumok += i;
            numok ++;
        }
    }
    sumok /= numok,sumnok /= numnok;
    printf("%.1lf %.1lf\n",sumok,sumnok);

    return 0;
}