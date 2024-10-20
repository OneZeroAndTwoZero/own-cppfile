#include<bits/stdc++.h>
using namespace std;

int n,w,t;
int cnt[1005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&w);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&t);
        cnt[t] ++;
        int pos = max(1,i * w / 100),now = 0;
        for(int j = 600;j >= 0;j --){
            now += cnt[j];
            if(now >= pos){
                printf("%d%c",j," \n"[i == n]);
                break;
            }
        }
    }

	return 0;
}
