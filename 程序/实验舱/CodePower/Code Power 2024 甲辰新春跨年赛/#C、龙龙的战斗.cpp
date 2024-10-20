#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
long long t1,t2,num = 1;
char op1,op2;

long long operate(long long a,char op,long long b){
    if(op == '+'){
        return a + b;
    }else if(op == '-'){
        return a - b;
    }else if(op == '*'){
        return a * b;
    }else{
        return ceil((double)a / b);
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

    cin >> n;
    while(n --){
        cin >> op1 >> t1 >> op2 >> t2;
        // cout << op1 << " " << t1 << " " << op2 << " " << t2 << "\n";
        num = max(operate(num,op1,t1),operate(num,op2,t2));
        // cout << num << ";;\n";
        if(num < 1){
            cout << "No\n" << ans << "\n";
            return 0;
        }
        ans ++;
    }
    cout << "Yes\n" << num << "\n";

    return 0;
}