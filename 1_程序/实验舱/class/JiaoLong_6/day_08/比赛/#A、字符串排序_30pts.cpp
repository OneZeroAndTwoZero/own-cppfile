#include<bits/stdc++.h>
using namespace std;

string s;
int n,m;
int l,r,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin >> s;
    while(m --){
        cin >> l >> r >> x;
        -- l;
        if(x){
            // cout << s << ";;\n";
            sort(s.begin() + l,s.begin() + r);
            // cout << s << ";;;\n";
        }else{
            // cout << s << ";;\n";
            sort(s.begin() + l,s.begin() + r,greater<int>());
            // cout << s << ";;;\n";
        }
    }
    cout << s << "\n";

	return 0;
}