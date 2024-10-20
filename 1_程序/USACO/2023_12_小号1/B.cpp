#include<bits/stdc++.h>
using namespace std;

int n,now,minn = 0x3f3f3f3f,ans = 0,t;
string s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    s.push_back('0');
    n ++;
    for(int i = 0;i < n;i ++){
        // cout << i << "  ;;  " << s[i] << "\n";
        if(s[i] == '0'){
            if(!now) continue;
            // cout << now << "[]\n";
            minn = min(minn,now);
            now = 0;
        }else{
            now ++;
        }
    }
    // cout << minn << ";;\n";
    if(minn == 0x3f3f3f3f){
        printf("0\n");
        return 0;
    }
    t = (minn - 1) >> 1;
    for(int i = 0;i < n;i ++){
        if(s[i] == '0'){
            if(!now) continue;
            ans += ((now - 1) / (t * 2 + 1)) + 1;
            now = 0;
        }else{
            now ++;
        }
    }
    cout << ans << "\n";

    return 0;
}
