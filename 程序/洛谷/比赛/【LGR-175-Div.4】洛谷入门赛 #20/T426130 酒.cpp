#include<bits/stdc++.h>
using namespace std;

double a,b,c,d,e,x,y;
double cura,curb,curc;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&x,&y);
    cura = a * x + b * y;
    curb = c * y;
    curc = d * y + e;
    if(cura > curb && cura > curc){
        printf("%d %.2lf\n",1,cura);
    }else if(curb > cura && curb > curc){
        printf("%d %.2lf\n",2,curb);
    }else{
        printf("%d %.2lf\n",3,curc);
    }

    return 0;
}