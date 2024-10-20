#include<bits/stdc++.h>
using namespace std;

deque<char> q;
char cur1,cur2;
int op,n;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    q.push_back('A'),q.push_back('B'),q.push_back('C');
    q.push_back('D'),q.push_back('E');
    while(cin >> op >> n){
        if(op == 1){
            while(n --){
                cur1 = q.front();
                q.pop_front();
                q.push_back(cur1);
            }
        }else if(op == 2){
            while(n --){
                cur1 = q.back();
                q.pop_back();
                q.push_front(cur1);
            }
        }else if(op == 3){
            cur1 = q.front();
            q.pop_front();
            cur2 = q.front();
            q.pop_front();
            q.push_front(cur1);
            q.push_front(cur2);
        }else{
            while(q.size()){
                cout << q.front() << " ";
                q.pop_front();
            }
            return 0;
        }
    }

    return 0;
}