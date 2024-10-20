#include<bits/stdc++.h>
#define check(x) (checkn(x,5) && checkn(x,7) && checkn(x,9))
using namespace std;

int a,b,ans;

bool checkn(int x,int k){
    if(x == 0) return 0;
    while(x){
        if(x % k == 0) return 0;
        x /= k;
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&a,&b);
    for(int i = a;i <= b;i ++){
        if(check(i)) ans ++;
    }
    printf("%d\n",ans);

	return 0;
}