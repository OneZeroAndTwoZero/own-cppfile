#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int opt,x,c;
int colw[1005],colh[1005];
int timew[1005],timeh[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&q);
    for(int i = 1;i <= q;i ++){
        scanf("%d %d %d",&opt,&x,&c);
        if(opt == 1){
            colw[x] = c;
            timew[x] = i;
        }else{
            colh[x] = c;
            timeh[x] = i;
        }
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            if(!timew[i] && !timeh[j]){
                printf("0 ");
            }else if(timew[i] > timeh[j]){
                printf("%d ",colw[i]);
            }else{
                printf("%d ",colh[j]);
            }
        }
        printf("\n");
    }

    return 0;
}