#include<bits/stdc++.h>
using namespace std;

int a,b;
bool n0 = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(~scanf("%d %d",&a,&b)){
        a *= b,b -= 1;
        if(a){
            printf("%d %d ",a,b);
            n0 = 0; 
        }
    }
    if(n0) printf("%d %d\n",0,0);

	return 0;
}
