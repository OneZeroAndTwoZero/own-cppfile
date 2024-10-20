#include<bits/stdc++.h>
using namespace std;

string s;
int las_n = -0x3f3f3f3f,las_o = -0x3f3f3f3f;
int las_i = -0x3f3f3f3f,las_p = -0x3f3f3f3f;
int ans = 0x3f3f3f3f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    getline(cin,s);
    for(int i = 0;i < s.size();i ++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    for(int i = 0;i < s.size();i ++){
        if(s[i] == 'n'){
            las_n = i;
            ans = min(ans,i - min({las_o,las_i,las_p}) + 1);
        }else if(s[i] == 'o'){
            las_o = i;
            ans = min(ans,i - min({las_n,las_i,las_p}) + 1);
        }else if(s[i] == 'i'){
            las_i = i;
            ans = min(ans,i - min({las_n,las_o,las_p}) + 1);
        }else if(s[i] == 'p'){
            las_p = i;
            ans = min(ans,i - min({las_n,las_o,las_i}) + 1);
        }
    }
    if(ans > s.size()) printf("-1\n");
    else printf("%d\n",ans);

	return 0;
}