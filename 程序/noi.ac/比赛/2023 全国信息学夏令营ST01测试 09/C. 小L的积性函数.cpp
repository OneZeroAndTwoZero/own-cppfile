#include<bits/stdc++.h>
using namespace std;

int n,ans,cnt = -1;
int u[3000006] = {0},num[3000006] = {0};
bool a[3000006] = {0};
int pri[400005] = {0};

void shai(){
    for(int i = 2;i <= n;i ++){
        if(!a[i]){
            pri[++cnt] = i;
            num[i] = 1;
            u[i] = -1;
        }
        for(int j = 0;j <= cnt && i * pri[j] <= n;j ++){
            a[i * pri[j]] = 1;
            if(u[i * pri[j]] != 0x3f3f3f3f){
                num[i * pri[j]] = num[i] + 1;
                if(num[i * pri[j]] & 1) u[i * pri[j]] = -1;
                else u[i * pri[j]] = 1;
            }
            if(i % pri[j] == 0) break;
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    u[1] = 1;
    for(int i = 2;;i ++){
        int t = i * i;
        if(t > n) break;
        for(int j = 1;j * t <= n;j ++){
            u[j * t] = 0x3f3f3f3f;
        }
    }
    shai();
    for(int i = 1;i <= n;i ++){
        if(u[i] != 0x3f3f3f3f)
            ans += u[i];
    }
    printf("%d\n",ans);

	return 0;
}