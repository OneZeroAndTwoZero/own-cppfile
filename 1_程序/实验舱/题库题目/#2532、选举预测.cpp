#include<bits/stdc++.h>
using namespace std;

int p,g;
double tem;
string s;
unordered_map<string,double> f;
unordered_map<string,int> is_bj;

bool ok(){
    string op;
    double now = 0;
    while(cin >> s){
        if(is_bj[s]){
            op = s;
            break;
        }
        if(s != "+"){
            now += f[s];
        }
    }
    cin >> tem;
    // cout << now << " " << tem << endl;
    if(op == "="){
        return now == tem;
    }else if(op == ">"){
        return now > tem;
    }else if(op == "<"){
        return now < tem;
    }else if(op == ">="){
        return now >= tem;
    }else{
        return now <= tem;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    is_bj["="] = is_bj[">"] = is_bj["<"] = is_bj[">="] = is_bj["<="] = 1;
    cin >> p >> g;
    for(int i = 0;i < p;i ++){
        cin >> s >> tem;
        f[s] = tem;
    }
    for(int i = 1;i <= g;i ++){
        printf("Guess #%d was ",i);
        if(ok()){
            printf("correct.\n");
        }else{
            printf("incorrect.\n");
        }
    }

	return 0;
}