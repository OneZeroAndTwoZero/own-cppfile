#include<bits/stdc++.h>
using namespace std;

int n,t,cnt1,cnt2;
string op;
queue<int> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n --){
        cin >> op;
        if(op == "I"){
            cin >> t;
            q.push(t);
            cnt1 ++;
        }else if(q.size()){
            cout << q.front() << " ";
            q.pop();
            if(cnt2){
                cout << "1\n";
                cnt2 --;
            }else{
                cout << 2 * cnt1 + 1 << "\n";
                cnt2 = cnt1 - 1;
                cnt1 = 0;
            }
        }else{
            cout << "ERROR\n";
        }
    }

	return 0;
}