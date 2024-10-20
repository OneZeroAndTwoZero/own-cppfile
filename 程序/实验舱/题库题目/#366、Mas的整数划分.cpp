#include<bits/stdc++.h>
using namespace std;

string s;
int ans,sum,cnt[5] = {1};

void __init(){
    cnt[0] = 1;
    cnt[1] = cnt[2] = sum = 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s;
    for(int i = 0;i < s.size();i ++){
        sum += (s[i] - '0');
        if(cnt[sum % 3] != 0){
            ++ ans;
            __init();
        }
        ++ cnt[sum % 3];
    }
    printf("%d\n",ans);

	return 0;
}