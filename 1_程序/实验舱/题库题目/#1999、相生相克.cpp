#include<bits/stdc++.h>
using namespace std;

int t,a,b;
map<int,int> sheng,ke;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    sheng[2] = 4,sheng[4] = 5,sheng[5] = 1,sheng[1] = 3,sheng[3] = 2;
    ke[1] = 2,ke[2] = 5,ke[5] = 3,ke[3] = 4,ke[4] = 1;
    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&a,&b);
        if(sheng[a] == b){
            printf("%d sheng %d\n",a,b);
        }else if(ke[a] == b){
            printf("%d ke %d\n",a,b);
        }else if(sheng[b] == a){
            printf("%d sheng %d\n",b,a);
        }else if(ke[b] == a){
            printf("%d ke %d\n",b,a);
        }
    }
    

	return 0;
}
