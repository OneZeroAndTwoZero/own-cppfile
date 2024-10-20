#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T,n,t,ans;
int num[5];
char ch;
string s;
unordered_map<int,int> f;
unordered_map<char,int> findmap;
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

    findmap['?'] = 0,findmap['X'] = 1,findmap['O'] = 2;
    for(int i = 0;i < 15;i ++){
        cin >> s;
        for(int j = 0;j < 15;j ++){
            f[turn(i,j)] = findmap[s[j]];
            num[findmap[s[j]]] ++;
        }
    }
    for(int i = 0;i < 15;i ++){
        for(int j = 0;j < 15;j ++){
            if(!check(i,j)) continue;
            if(f[turn(i,j)] == 1) cout << "Mas Win!\n";
            else cout << "HuChi Win!\n";
            return 0;
        }
    }
    if(num[1] + num[2] == 15 * 15) cout << "Tie\n";
    else{
        if(num[1] <= num[2]) cout << "Mas\n";
        else cout << "HuChi\n";
    }

    return 0;
}