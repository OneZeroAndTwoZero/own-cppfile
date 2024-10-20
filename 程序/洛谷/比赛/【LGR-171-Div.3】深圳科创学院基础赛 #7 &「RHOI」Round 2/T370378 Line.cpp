#include<bits/stdc++.h>
using namespace std;

int T;
int x[5],y[5];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        for(int i = 0;i < 4;i ++){
            scanf("%d %d",&x[i],&y[i]);
        }
        if(x[3] >= x[0] && x[3] <= x[1]){
            if(y[2] <= y[0] && y[3] >= y[0]){
                printf("0\n");
            }else{
                printf("1\n");
            }
        }else{
            if(y[2] <= y[0] && y[3] >= y[0]){
                printf("1\n");
            }else{
                printf("2\n");
            }
        }
    }

    return 0;
}