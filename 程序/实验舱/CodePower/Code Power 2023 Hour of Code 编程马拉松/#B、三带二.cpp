#include<bits/stdc++.h>
using namespace std;

int t;
int a[15];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&t);
    while(t --){
        for(int i = 0;i < 5;i ++){
            scanf("%d",&a[i]);
        }
        sort(a,a + 5);
        if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4]){
            printf("Yes\n");
        }else if(a[0] == a[1] && a[2] == a[3] && a[3] == a[4]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}