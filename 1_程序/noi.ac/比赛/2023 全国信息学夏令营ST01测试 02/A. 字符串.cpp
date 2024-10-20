#include<bits/stdc++.h>
using namespace std;

string s1,s2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    if(s1.find(s2) != s1.npos){
        printf("%d\n",s1.find(s2));
    }else{
        printf("-1\n");
    }

	return 0;
}
