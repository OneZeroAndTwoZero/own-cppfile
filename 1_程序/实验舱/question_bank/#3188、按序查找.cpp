#include<bits/stdc++.h>
using namespace std;

int n,x,cnt = 0;
int a[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i = 1;i <= n;i ++){
        if(a[i] == x){
            if(cnt) printf(",");
            printf("%d",i);
            cnt ++;
        }
    }
    if(!cnt) printf("no\n");


	return 0;
}