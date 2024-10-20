#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
int a[__len(3)][__len(3)];

bool check(int x,int y){
    swap(a[x / n][x % n],a[y / n][y % n]);
    set<int> sc,sr;
    for(int i = 0;i < n;i ++){
        int sumr = 0,sumc = 0;
        for(int j = 0;j < n;j ++){
            sumr += a[i][j];
            sumc += a[j][i];
        }
        sc.insert(sumc),sr.insert(sumr);
    }
    swap(a[x / n][x % n],a[y / n][y % n]);
    if(sc.size() > 1 || sr.size() > 1) return 0;
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n * n;i ++){
        for(int j = i + 1;j < n * n;j ++){
            if(!check(i,j)) continue;
            printf("%d %d\n",i + 1,j + 1);
        }
    }

    return 0;
}