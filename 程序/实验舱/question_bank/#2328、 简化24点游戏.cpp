#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int a[5], ans = 0;
char op[5] = "+-*";
string temp = "";

int cal(){
    vector<int> val;
    vector<char> op;
    for (int i = 0; i < 4; i ++) val.push_back(a[i]);
    for (int i = 0; i < 3; i ++) op.push_back(temp[i]);
    for (int i = 0; i < op.size(); i ++){
        // cout << val[i] << " " << op[i] << "[][]\n";
        if (op[i] == '*'){
            val[i] = val[i] * val[i + 1];
            val.erase(val.begin() + i + 1);
            op.erase(op.begin() + i);
            i --;
        }
    }
    while (op.size()){
        if (*op.begin() == '+'){
            val[0] = val[0] + val[1];
        }else{
            val[0] = val[0] - val[1];
        }
        op.erase(op.begin());
        val.erase(val.begin() + 1);
    }
    return val[0];
}

void putout(){
    for (int i = 0; i < 3; i ++){
        printf("%d%c", a[i], temp[i]);
    }
    printf("%d\n", a[3]);
}

void dfs(int k, bool is_out){
    if (k == 3){
        // putout();
        if (cal() == 24){
            if (is_out) putout();
            else ans ++;
        }
        return;
    }
    for (int i = 0; i < 3; i ++){
        temp.push_back(op[i]);
        dfs(k + 1, is_out);
        temp.pop_back();
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    // ios::sync_with_stdio(0);
    // cin.tie(NULL);
    // cout.tie(NULL);

    for (int i = 0; i < 4; i ++) scanf("%d", &a[i]);
    sort(op, op + 3);
    dfs(0, 0);
    printf("%d\n", ans);
    dfs(0, 1);

    return 0;
}