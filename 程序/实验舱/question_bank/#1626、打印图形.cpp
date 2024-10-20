#include<bits/stdc++.h>
using namespace std;

int n;
string a,b;

string operate(int x,int y){
    if(n >= 3 && (x == 0 || x == n - 1) && y == 0) return " ";
    int cur = (n >> 1) - min({x,y,(n - x - 1),(n - y - 1)});
    if(cur & 1) return b;
    return a;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> a >> b;
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            if(n >= 3 && (i == 0 || i == n - 1) && j == n - 1) continue;
            cout << operate(i,j);
        }
        cout << "\n";
    }

	return 0;
}