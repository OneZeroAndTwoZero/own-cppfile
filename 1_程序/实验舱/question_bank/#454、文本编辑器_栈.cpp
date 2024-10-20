#include<bits/stdc++.h>
using namespace std;

char ch;
stack<char> s;

void putout(){
    if(!s.size()) return;
    char t = s.top();
    s.pop();
    putout();
    printf("%c",t);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(~scanf("%c",&ch)){
        if(ch == '@'){
            if(s.size())
                s.pop();
        }else if(ch == '#'){
            while(s.size())
                s.pop();
        }else{
            s.push(ch);
        }
    }
    putout();

    return 0;
}