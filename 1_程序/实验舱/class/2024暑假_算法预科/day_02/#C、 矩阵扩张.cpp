#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,x;
bool a[5005][5005];

void operate(int k,int x,int y){ // (x,y) -> 2^k
    if(k == 0) return;
    // cout << k << " " << x << " " << y << "\n";
    // cout << a[x][y] << ";;;\n";
    a[x + (1 << (k - 1))][y] = a[x][y];
    a[x][y + (1 << (k - 1))] = a[x][y];
    a[x + (1 << (k - 1))][y + (1 << (k - 1))] = a[x][y];
    a[x][y] = !a[x][y];
    operate(k - 1,x,y);
    operate(k - 1,x + (1 << (k - 1)),y);
    operate(k - 1,x,y + (1 << (k - 1)));
    operate(k - 1,x + (1 << (k - 1)),y + (1 << (k - 1)));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&x);
    if(x) a[0][0] = 1;
    operate(n,0,0);
    for(int i = 0;i < (1 << n);i ++){
        for(int j = 0;j < (1 << n);j ++){
            if(a[i][j]) printf("1");
            else printf("0");
        }
        printf("\n");
    }

    return 0;
}