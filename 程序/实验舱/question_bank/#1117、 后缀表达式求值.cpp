#include<bits/stdc++.h>
using namespace std;

char ch;
int temp = 0;
stack<int> val;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1){
        ch = getchar();
        if (ch == '@') break;
        if (isdigit(ch)){
            temp = (temp << 3) + (temp << 1) + (ch ^ 48);
        }else if (ch == ' '){
            val.push(temp);
            temp = 0;
        }else{
            int op1 = val.top();
            val.pop();
            int op2 = val.top();
            val.pop();
            if (ch == '+') val.push(op2 + op1);
            else if (ch == '-') val.push(op2 - op1);
            else if (ch == '*') val.push(op2 * op1);
            else if (ch == '/') val.push(op2 / op1);
        }
    }
    printf("%d\n", val.top());

    return 0;
}