#include<bits/stdc++.h>
using namespace std;\

int h,m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d:%d",&h,&m);
    if(h < 12 || h == 12 && m == 0){
        printf("Only %02d:%02d.  Too early to Dang.",h,m);
    }else{
        h -= 12;
        h += (m > 0);
        for(int i = 0;i < h;i ++){
            printf("Dang");
        }
    }
    printf("\n");

	return 0;
}