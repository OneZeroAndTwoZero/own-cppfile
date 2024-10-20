#include<bits/stdc++.h>
using namespace std;

int a,b,c,k;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(k <= a){
        printf("%.9lf\n",1.0);
    }else if(k > b){
        printf("%.9lf\n",0.0);
    }else{
        printf("%.9lf\n",(double)c / (b - a));
    }

	return 0;
}