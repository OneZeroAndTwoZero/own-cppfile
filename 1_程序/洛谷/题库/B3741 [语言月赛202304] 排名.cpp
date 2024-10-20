#include<bits/stdc++.h>
using namespace std;

int a1,a2,p1,p2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&a1,&p1,&a2,&p2);
    if(a1 > a2 || a1 == a2 && p1 < p2){
        printf("\"\\n\"\n");
    }else{
        printf("\"\\t\"\n");
    }

    return 0;
}