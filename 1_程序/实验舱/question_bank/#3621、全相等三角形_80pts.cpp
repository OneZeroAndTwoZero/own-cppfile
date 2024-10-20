#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
char a[105][105];

int check(int sx,int sy,int ex,int ey,int op){
    // cout << sx << " " << sy << " " << ex << " " << ey << " " << op << "\n";
    if(sx < 0 || sy < 0 || ex < 0 || ey < 0) return 0;
    if(sx >= n || sy >= m || ex >= n || ex >= m) return 0;
    char res = a[sx][sy];
    if(op == 1){ // one row
        for(int k = sy;k <= ey;k ++){
            // cout << sx << "[]" << k << ";;\n";
            if(a[sx][k] != res) return 0;
            // cout << sx << "[]" << k << ";;\n";
        }
    }else if(op == 2){ // one coluwn
        for(int k = sx;k <= ex;k ++){
            // cout << k << "[][]" << sy << ";;\n";
            if(a[k][sy] != res) return 0;
            // cout << k << "[][]" << sy << ";;\n";
        }
    }else if(op == 3){ // main
        for(int i = sx,j = sy;j <= ey;i ++,j ++){
            // cout << i << "[][][]" << j << ";;\n";
            if(a[i][j] != res) return 0;
            // cout << i << "[][][]" << j << ";;\n";
        }
    }else{
        for(int i = sx,j = sy;j <= ey;i --,j ++){
            // cout << i << "[][][][]" << j << ";;\n";
            if(a[i][j] != res) return 0;
            // cout << i << "[][][][]" << j << ";;\n";
        }
    }
    // cout << "\n\n";
    return 1;
}

void operate(int x,int y,int st){
    // cout << x << " " << y << " " << st << ";;\n";
    ans += check(x,y,x,y + st,1) && check(x,y,x + st,y,2) && check(x + st,y,x,y + st,4);
    // cout << ans << ";;\n";
    ans += check(x,y - st,x,y,1) && check(x,y,x + st,y,2) && check(x,y - st,x + st,y,3);
    // cout << ans << ";;\n";
    ans += check(x,y - st,x,y,1) && check(x - st,y,x,y,2) && check(x,y - st,x - st,y,4);
    // cout << ans << ";;\n";
    ans += check(x,y,x,y + st,1) && check(x - st,y,x,y,2) && check(x - st,y,x,y + st,3);
    // cout << ans << ";;\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            for(int k = 1;k < max(n,m);k ++){
                operate(i,j,k);
            }
        }
    }
    cout << ans << "\n";

    return 0;
}