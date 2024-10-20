#include<bits/stdc++.h>
using namespace std;

int t,check;
string s;
int ans1,ans2;
queue<char> q;

string score(){
    if(ans1 == check && ans2 != check){
        return "A";
    }else if(ans1 == check && ans2 == check){
        return "B";
    }else if(ans1 != check && ans2 == check){
        return "C";
    }
    return "F";
}

int ans(){
    stack<char> a;
    stack<int> suan;
    for(int i = 0;i < s.size();i ++){
        if(s[i] == '+'){
            while(a.size() && a.top() == '*'){
                q.push('*');
                a.pop();
            }
            a.push('+');
        }else if(s[i] == '*'){
            a.push('*');
        }else{
            q.push(s[i]);
        }
    }
    while(a.size()){
        q.push(a.top());
        a.pop();
    }
    while(q.size()){
        char ch = q.front();
        q.pop();
        if(ch == '+'){
            int num2 = suan.top();
            suan.pop();
            int num1 = suan.top();
            suan.pop();
            suan.push(num1 + num2);
        }else if(ch == '*'){
            int num2 = suan.top();
            suan.pop();
            int num1 = suan.top();
            suan.pop();
            suan.push(num1 * num2);
        }else{
            suan.push(ch - '0');
        }
    }
    return suan.top();
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    cin >> t;
    while(t --){
        cin >> s;
        cin >> check;
        int op = 1;
        ans1 = 0,ans2 = 0;
        for(int i = 0;i < s.size();i ++){
            if(s[i] == '+'){
                op = 1;
            }else if(s[i] == '*'){
                op = 2;
            }else{
                if(op == 1) ans2 += (s[i] - '0');
                else ans2 *= (s[i] - '0');
            }
        }
        ans1 = ans();
        cout << score() << endl;
    }

	return 0;
}