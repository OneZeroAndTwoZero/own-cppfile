#include<bits/stdc++.h>
using namespace std;

string check = "You are right, but ";
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin,s);
    if(s.find(check) == 0){
        printf("AI\n");
    }else{
        printf("Human\n");
    }

    return 0;
}