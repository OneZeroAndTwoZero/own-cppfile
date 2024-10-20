#include<bits/stdc++.h>
using namespace std;

int n,m,sum;
int a[1005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d",&a[i]);
    }
    if(m > n){
        printf("NE\n");
        return 0;
    }
    for(int i = 0;i < m;i ++){
        if(a[i] < 4){
            printf("NE\n");
            return 0;
        }
        sum += a[i] / 4;
    }
    if(sum >= n){
        printf("DA\n");
    }else{
        printf("NE\n");
    }

	return 0;
}