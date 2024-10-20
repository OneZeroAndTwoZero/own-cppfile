#include<bits/stdc++.h>
using namespace std;

struct is{
    string si;
    int st;
};

string s = "123804765",check;
int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
unordered_map<string,int> zhao;

int bfs(){
    queue<is> q;
    q.push({s,0});
    zhao[s] ++;
    while(q.size()){
        is t = q.front();
        q.pop();
        if(t.si == check){
            return t.st;
        }
        int pos = t.si.find("0");
        int x = pos / 3,y = pos % 3;
        for(int i = 0;i < 4;i++){
            int tx = x + dir[i][0],ty = y + dir[i][1];
            if(tx >= 0 && ty >= 0 && tx < 3 && ty < 3){
                swap(t.si[tx * 3 + ty],t.si[pos]);
                if(!zhao[t.si]){
                    zhao[t.si] ++;
                    q.push({t.si,t.st + 1});
                }
                swap(t.si[tx * 3 + ty],t.si[pos]);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> check;
    printf("%d\n",bfs());

    return 0;
}