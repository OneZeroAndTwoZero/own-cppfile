#include<bits/stdc++.h>
using namespace std;

int p1,p2,p3;
string s,ans;

void add(char x){
    for(int i = 0;i < p2;i ++){
        ans.push_back(x);
    }
}

char turn(char x,int p){
    if(p == 0){
        if(x >= 'a' && x <= 'z'){
            x = x - 'a' + 'A';
        }
    }else{
        if(x >= 'A' && x <= 'Z'){
            x = x - 'A' + 'z';
        }
    }
    return x;
}

void operate(char l,char r){
    if(p1 == 1){
        if(p3 == 1){
            for(int i = l + 1;i < r;i ++){
                add(turn(i,1));
            }
        }else{
            for(int i = r - 1;i > l;i --){
                add(turn(i,1));
            }
        }
    }else if(p1 == 2){
        if(p3 == 1){
            for(int i = l + 1;i < r;i ++){
                add(turn(i,0));
            }
        }else{
            for(int i = r - 1;i > l;i --){
                add(turn(i,0));
            }
        }
    }else if(p1 == 3){
        for(int i = l + 1;i < r;i ++){
            add('*');
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(cin >> p1 >> p2 >> p3){
        cin >> s;
        ans.clear();
        for(int i = 0;i < s.size();i ++){
            if(i != 0 && i != s.size() - 1 && s[i] == '-' && s[i + 1] > s[i - 1]){
                operate(s[i - 1],s[i + 1]);
            }else{
                ans.push_back(s[i]);
            }
        }
        cout << ans << "\n";
    }

	return 0;
}