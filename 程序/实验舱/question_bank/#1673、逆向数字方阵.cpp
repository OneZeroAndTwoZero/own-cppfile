#include<bits/stdc++.h>
using namespace std;

int n;

int operate(int x,int y){
    int cur = min({x,y,(n - x - 1),(n - y - 1)});
    return (n >> 1) - cur + 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            printf("%d ",operate(i,j));
        }
        printf("\n");
    }

	return 0;
}