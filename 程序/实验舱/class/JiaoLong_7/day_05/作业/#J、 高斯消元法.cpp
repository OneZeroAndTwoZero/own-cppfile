#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define EPS 1e-7 // 精度(绝对值<EPS即认为为0)
using namespace std;

int n;
double a[2005][2005]; // !!!double!!!

int Gauss_Jordan(){
    int rnk = 1; // 秩
    for(int c = 1;c <= n;c ++){
        int t = rnk;
        for(int i = rnk;i <= n;i ++){
            if(abs(a[i][c]) > abs(a[t][c])){
                t = i; // 选择绝对值最大的
            }
        }
        if(abs(a[t][c]) < EPS){
            continue; // 全为0则不运行了
        }
        swap(a[rnk],a[t]); // 交换
        for(int i = 1;i <= n;i ++){
            if(abs(a[i][c]) > EPS && i != rnk){
                for(int j = n + 1;j >= c;j --){
                    a[i][j] -= a[i][c] * a[rnk][j] / a[rnk][c];
                }
            }
        }
        rnk ++;
    }
    if(rnk < n + 1){ // rnk < n + 1 -> 不存在唯一解
        for(int i = rnk;i <= n;i ++){
            if(abs(a[i][n + 1] / a[i][i]) > EPS){
                return 2; // 检查常数是否为0(不为0则无解)
            }
        }
        return 1;
    }
    return 0;
    // 0 -> ok
    // 1 -> INF
    // 2 -> no answer
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d", &n);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= n + 1;j ++){
            scanf("%lf",&a[i][j]);
        }
    }
    int res = Gauss_Jordan();
    if(res == 2){
        printf("No Answer\n");
    }else if(res == 1){
        printf("INF\n");
    }else{
        for(int i = 1;i <= n;i ++){
            if(abs(a[i][n + 1] / a[i][i]) < EPS){
                printf("x%d=0.00\n",i);
            }else{
                printf("x%d=%.2lf\n",i,a[i][n + 1] / a[i][i]);
            }
        }
    }

    return 0;
}