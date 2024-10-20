#include<bits/stdc++.h>
using namespace std;

int n,k,cnt = 0;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    while(n --){
        cin >> s;
        if(cnt == 0){
            cnt += s.size();
            cout << s;
        }else{
            if(cnt + s.size() <= k){
                cout << " " << s;
                cnt += s.size();
            }else{
                cout << "\n" << s;
                cnt = s.size();
            }
        }
    }

    return 0;
}