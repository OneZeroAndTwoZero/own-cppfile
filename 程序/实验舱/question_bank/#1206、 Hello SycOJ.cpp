#include<bits/stdc++.h>
using namespace std;

string s[105] = {
"      ___           ___           ___           ___            ___\n",
"     /\\  \\         |\\__\\         /\\  \\         /\\  \\          /\\  \\ \n",
"    /::\\  \\        |:|  |       /::\\  \\       /::\\  \\         \\:\\  \\ \n",
"   /:/\\ \\  \\       |:|  |      /:/\\:\\  \\     /:/\\:\\  \\    ___ /::\\__\\ \n",
"  _\\:\\%\\ \\  \\      |:|__|__   /:/  \\:\\  \\   /:/  \\:\\  \\  /\\  /:/\\/__/\n",
" /\\ \\:\\ \\ \\__\\     /::::\\__\\ /:/__/ \\:\\__\\ /:/__/ \\:\\__\\ \\:\\/:/  /\n",
" \\:\\ \\:\\ \\/__/    /:/::/    \\:\\  \\  \\/__/ \\:\\  \\ /:/  /  \\::/  /\n",
"  \\:\\ \\:\\__\\     /:/  /       \\:\\  \\        \\:\\  /:/  /    \\/__/\n",
"   \\:\\/:/  /     \\/__/         \\:\\  \\        \\:\\/:/  /\n",
"    \\::/  /                     \\:\\__\\        \\::/  /\n",
"     \\/__/                       \\/__/         \\/__/\n"
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 11; i ++){
        cout << s[i];
    }

    return 0;
}