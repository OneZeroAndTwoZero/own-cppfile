#include<bits/stdc++.h>
using namespace std;

int q,x;
int f[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
  
    f[1] = f[2] = 1;
    for(int i = 3;i <= 46;i ++){
        f[i] = f[i - 1] + f[i - 2];
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d",&x);
        int l = 1,r = 45,res = 0;
        while(l <= r){
            int mid = (l + r) >> 1;
            if(f[mid] <= x){
                res = f[mid];
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        printf("%d\n",res);
    }

	return 0;
}