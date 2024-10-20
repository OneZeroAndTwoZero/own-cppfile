#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int k = 0;
long long ans = 1;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    for(int i = 0;i < s1.size() - 1;i ++){
        int pos = s2.find(s1[i]);
        if(pos != 0 && s2[pos - 1] == s1[i + 1]){
            k ++;
        }
    }
    while(k --){
        ans *= 2;
    }
    printf("%lld\n",ans);

	return 0;
}
