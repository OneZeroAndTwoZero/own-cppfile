#include<bits/stdc++.h>
using namespace std;

string s;
int cur = 0,cnt = 0;
vector<int> a;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(getline(cin,s)){
        int st = 0;
        while(s.find("fight",st) != s.npos){
            st = s.find("fight",st);
            a.push_back(cur + st);
            cnt ++,st ++;
        }
        cur += s.size();
    }
    printf("%d\n",cnt);
    for(int i = 0;i < a.size();i ++){
        printf("%d%c",a[i]," \n"[i == a.size() - 1]);
    }

	return 0;
}