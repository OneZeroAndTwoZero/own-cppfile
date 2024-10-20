#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T,n,q;
char a[105][105];
int sx,sy,ex,ey;
int curx,cury;
string s;

void solve(){
    bool p = 1;
    for(int i = 0;i < s.size();i ++){
        if(s[i] == 'U') curx --;
        else if(s[i] == 'D') curx ++;
        else if(s[i] == 'L') cury --;
        else cury ++;
        if(curx < 0 || curx >= n || cury < 0 || cury >= n){
            printf("I am out!\n");
            p = 0;
            break;
        }else if(a[curx][cury] == '#'){
            printf("I am dizzy!\n");
            p = 0;
            break;
        }
    }
    if(!p) return;
    if(curx == ex && cury == ey){
        printf("I get there!\n");
    }else{
        printf("I have no idea!\n");
    }
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
        for(int i = 0;i < n;i ++){
            cin >> a[i];
            for(int j = 0;j < n;j ++){
                if(a[i][j] == 'S') sx = i,sy = j;
                if(a[i][j] == 'T') ex = i,ey = j;
            }
        }
        cin >> q;
        while(q --){
            cin >> s;
            curx = sx,cury = sy;
            solve();
        }
    }

    return 0;
}