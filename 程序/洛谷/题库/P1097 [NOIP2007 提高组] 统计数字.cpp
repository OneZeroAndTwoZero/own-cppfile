#include<bits/stdc++.h>
using namespace std;

map<int,int> zhao;
int n,t;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    while(n --){
        scanf("%d",&t);
        zhao[t] ++;
    }
    map<int,int> :: iterator it;
    for(it = zhao.begin();it != zhao.end();it ++){
        printf("%d %d\n",it -> first,it -> second);
    }

    return 0;
}