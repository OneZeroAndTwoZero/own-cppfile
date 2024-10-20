#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int a, b, n, ans = 2000000009;
deque<int> qmax, qmin;
int val[1005][1005];
int pre1[2][1005][1005]; // max & min
int pre2[2][1005][1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &a, &b, &n);
    for (int i = 1; i <= a; i ++){
        for (int j = 1; j <= b; j ++){
            scanf("%d", &val[i][j]);
        }
    }
    for (int i = 1; i <= a; i ++){ // 1.row
        qmax.clear(), qmin.clear();
        for (int j = 1; j <= b; j ++){
            while (qmax.size() && qmax.front() <= j - n){
                qmax.pop_front();
            }
            while (qmin.size() && qmin.front() <= j - n){
                qmin.pop_front();
            }
            while (qmax.size() && val[i][qmax.back()] <= val[i][j]){
                qmax.pop_back();
            }
            while (qmin.size() && val[i][qmin.back()] >= val[i][j]){
                qmin.pop_back();
            }
            qmax.push_back(j), qmin.push_back(j);
            if (j < n) continue;
            pre1[0][i][j] = val[i][qmax.front()];
            pre1[1][i][j] = val[i][qmin.front()];
        }
    }
    // for (int i = 1; i <= a; i ++){
    //     for (int j = 1; j <= b; j ++){
    //         cout << pre1[0][i][j] << " ";
    //     }
    //     cout << ";\n";
    // }
    // for (int i = 1; i <= a; i ++){
    //     for (int j = 1; j <= b; j ++){
    //         cout << pre1[1][i][j] << " ";
    //     }
    //     cout << ";;\n";
    // }
    for (int j = n; j <= b; j ++){
        qmax.clear(), qmin.clear();
        for (int i = 1; i <= a; i ++){
            while (qmax.size() && qmax.front() <= i - n){
                qmax.pop_front();
            }
            while (qmin.size() && qmin.front() <= i - n){
                qmin.pop_front();
            }
            while (qmax.size() && pre1[0][qmax.back()][j] <= pre1[0][i][j]){
                qmax.pop_back();
            }
            while (qmin.size() && pre1[1][qmin.back()][j] >= pre1[1][i][j]){
                qmin.pop_back();
            }
            qmax.push_back(i), qmin.push_back(i);
            if (i < n) continue;
            pre2[0][i][j] = pre1[0][qmax.front()][j];
            pre2[1][i][j] = pre1[1][qmin.front()][j];
        }
    }
    // for (int i = 1; i <= a; i ++){
    //     for (int j = 1; j <= b; j ++){
    //         cout << pre2[0][i][j] << " ";
    //     }
    //     cout << "[]\n";
    // }
    // for (int i = 1; i <= a; i ++){
    //     for (int j = 1; j <= b; j ++){
    //         cout << pre2[1][i][j] << " ";
    //     }
    //     cout << "[]\n";
    // }
    for (int i = n; i <= a; i ++){
        for (int j = n; j <= b; j ++){
            ans = min(ans, pre2[0][i][j] - pre2[1][i][j]);
        }
    }
    printf("%d\n",ans);

    return 0;
}