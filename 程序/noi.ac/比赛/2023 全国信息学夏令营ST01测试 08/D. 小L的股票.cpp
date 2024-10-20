#include<bits/stdc++.h>
using namespace std;

int d,n,s,ans = 0;
int a[1005][1005] = {0};
int dp[105][1005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d %d",&d,&n,&s);
    for(int i = 1;i <= d;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    if(d == 1){
        printf("%d\n",s);
        return 0;
    }
    for(int day = 1;day < d;day ++){
        for(int i = 0;i < n;i ++){
            int mn = a[day][i],m2 = a[day + 1][i];
            for(int j = 0;j <= 1000;j ++){
                dp[day][j] = j;
                if(j >= mn) dp[day][j] = max(j,dp[day][j - mn] + m2);
            }
        }
        // for(int i = 0;i <= 100;i ++){
        //     cout << dp[day][i] << " ";
        // }
        // cout << endl;
    }
    for(int i = 1;i < d;i ++){
        s = dp[i][s];
    }
    printf("%d\n",s);

	return 0;
}
