#include<bits/stdc++.h>
using namespace std;

int n;
string s;
set<string> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n;
    getline(cin,s);
    while(n --){
        getline(cin,s);
        f.clear();
        f.insert("");
        for(int i = 0;i < s.size();i ++){
            string tem = "";
            for(int j = i;j < s.size();j ++){
                tem.push_back(s[j]);
                f.insert(tem);
            }
        }
        printf("%d\n",f.size());
    }

	return 0;
}