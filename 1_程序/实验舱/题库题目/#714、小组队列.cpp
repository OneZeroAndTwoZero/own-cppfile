#include<bits/stdc++.h>
using namespace std;

int t,pos = 0;
int num,tem;
unordered_map<int,int> f_group,in;
string op;
queue<int> group;
queue<int> peo[2005];

void __init(){
    f_group.clear();
    in.clear();
    while(group.size()){
        group.pop();
    }
    for(int i = 0;i <= 2000;i ++){
        while(peo[i].size()){
            peo[i].pop();
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(cin >> t){
        if(!t){
            break;
        }
        __init();
        cout << "Scenario #" << ++ pos << "\n";
        for(int i = 1;i <= t;i ++){
            cin >> num;
            for(int j = 0;j < num;j ++){
                cin >> tem;
                f_group[tem] = i;
            }
        }
        while(cin >> op){
            if(op == "ENQUEUE"){
                cin >> tem;
                if(in[f_group[tem]]){
                    peo[f_group[tem]].push(tem);
                }else{
                    group.push(f_group[tem]);
                    in[f_group[tem]] = 1;
                    peo[f_group[tem]].push(tem);
                }
            }else if(op == "DEQUEUE"){
                cout << peo[group.front()].front() << "\n";
                peo[group.front()].pop();
                if(!peo[group.front()].size()){
                    group.pop();
                }
            }else{
                break;
            }
        }
        cout << "\n";
    }

	return 0;
}