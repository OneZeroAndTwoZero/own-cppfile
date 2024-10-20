#include<bits/stdc++.h>
using namespace std;

string s;
int t;
map<char,int> check;
stack<int> a;
bool p = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    check['{'] = 1,check['['] = 2,check['('] = 3,check['<'] = 4;
    check['}'] = 8,check[']'] = 7,check[')'] = 6,check['>'] = 5;
    cin >> t;
    while(t --){
        cin >> s;
        p = 1;
        for(int i = 0;i < s.size();i ++){
            if(!a.size()){
                if(check[s[i]] >= 5){
                    p = 0;
                    printf("NO\n");
                    break;
                }else{
                    a.push(s[i]);
                }
            }else if(check[s[i]] >= 5){
                if(check[a.top()] + check[s[i]] == 9){
                    a.pop();
                }else{
                    p = 0;
                    printf("NO\n");
                    break;
                }
            }else{
                if(check[a.top()] > check[s[i]]){
                    p = 0;
                    printf("NO\n");
                    break;
                }else{
                    a.push(s[i]);
                }
            }
        }
        if(p && a.size()){
            p = 0;
            printf("NO\n");
            break;
        }
        if(p){
            printf("YES\n");
        }
        while(a.size()){
            a.pop();
        }
    }
    
	return 0;
}