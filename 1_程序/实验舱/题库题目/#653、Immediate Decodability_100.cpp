#include<bits/stdc++.h>
using namespace std;

int num,cnt = 1;
string s[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(cin >> s[0]){
        bool ans = 0;
        for(num = 1;;num ++){
            cin >> s[num];
            if(s[num] == "9") break;
        }
        for(int i = 0;i < num && !ans;i ++)
            for(int j = i + 1;j < num && !ans;j ++)
                if(s[i].find(s[j]) == 0 || s[j].find(s[i]) == 0)
                    ans = 1;
        if(ans) printf("Set %d is not immediately decodable\n",cnt ++);
        else printf("Set %d is immediately decodable\n",cnt ++);
    }

	return 0;
}