#include<bits/stdc++.h>
using namespace std;

int v1,v2,t,s,l,l1 = 0,l2 = 0,freetime = 0,time_ = 0;
bool ans1 = 0,ans2 = 0,u = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
    while(!(ans1 | ans2)){
        time_ ++;
        l1 += v1,l2 += v2;
        if(freetime){
            l1 -= v1;
            freetime --;
        }
        if(l1 - l2 >= t && !freetime){
            freetime = s;
            u = 1;
        }
        ans1 = l1 >= l;
        ans2 = l2 >= l;
        if(!ans1 && !ans2) continue;
        if(ans1 && ans2){
            printf("D\n");
        }else if(ans1){
            printf("R\n");
        }else if(ans2){
            printf("T\n");
        }
        printf("%d\n",time_);
    }

	return 0;
}