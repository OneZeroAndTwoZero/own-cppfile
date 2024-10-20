#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,n,t,ans;
char ch;
unordered_map<int,int> f;
int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

int turn(int x,int y){
    return x * 29 + y;
}

bool check(int x,int y){
    int temp = f[turn(x,y)];
    if(!temp) return 0;
    for(int k = 0;k < 8;k ++){
        int tx = x,ty = y;
        bool res = 1;
        for(int i = 0;i < 4;i ++){
            tx += dir[k][0],ty += dir[k][1];
            if(tx < 0 || ty < 0 || tx >= 15 || ty >= 15){
                res = 0;
                break;
            }
            if(res && f[turn(tx,ty)] != temp) res = 0;
        }
        if(res) return 1;
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while(T --){
        cin >> n;
        f.clear(),ans = 0;
        for(int i = 0;i < n;i ++){
            cin >> ch >> t;
            // cout << ch << " " << t << "[]\n";
            // cout << ch - 'A' << ";;\n";
            if(i & 1) f[turn(15 - t,ch - 'A')] = 2; // white
            else f[turn(15 - t,ch - 'A')] = 1; // black
            if(ans != 0) continue;
            for(int x = 0;x < 15;x ++){
                for(int y = 0;y < 15;y ++){
                    if(!(check(x,y))) continue;
                    if(i & 1) ans = 2;
                    else ans = 1;
                }
            }
        }
        for(int i = 0;i < 15;i ++){
            for(int j = 0;j < 15;j ++){
                if(f[turn(i,j)] == 0) cout << "?";
                else if(f[turn(i,j)] == 1) cout << "X";
                else cout << "O";
                cout << " \n"[j == 14];
            }
        }
        if(ans == 2){
            cout << "HuChi win\n";
        }else if(ans == 1){
            cout << "Mas win\n";
        }else{
            cout << "No solution\n";
        }
    }

    return 0;
}