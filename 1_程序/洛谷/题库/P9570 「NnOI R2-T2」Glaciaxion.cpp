#include<bits/stdc++.h>
using namespace std;

int n,m,pos = 1;
string s;
vector<int> ans;

void out(){
    for(int i = 0;i < ans.size();i ++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n >> m >> s;
    if(s[0] != 'N'){
        cout << "No solution\n";
    }else{
        for(int i = 0;i < s.size();i ++){
            if(s[i] == 'N') ans.push_back(pos ++);
            else ans.push_back(1);
            if(pos > n + 1){
                cout << "No solution\n";
                return 0;
            }
        }
        out();
    }

	return 0;
}