#include<bits/stdc++.h>
using namespace std;

int n,ans = 0,now = 7,to;
string s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> n;
    cin >> s;
    for(int i = 0;i < s.size();i ++){
        if(s[i] == 'W') to = 7;
        else if(s[i] == 'B') to = 6;
        else to = 4;
        int t = 1;
        for(int i = 1;i <= 3;i ++){
            if(to & t){
                if(!(now & t)){
                    ans ++;
                    now += t;
                }
                break;
            }else{
                if(now & t){
                    ans ++;
                    now -= t;
                }
            }
            t *= 2;
        }
    }
    printf("%d\n",ans);

	return 0;
}