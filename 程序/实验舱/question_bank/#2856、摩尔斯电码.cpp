#include<bits/stdc++.h>
using namespace std;

int n;
string s;
unordered_map<string,char> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    f[".-"] = 'A';
    f["-..."] = 'B';
    f["-.-."] = 'C';
    f["-.."] = 'D';
    f["."] = 'E';
    f["..-."] = 'F';
    f["--."] = 'G';
    f["...."] = 'H';
    f[".."] = 'I';
    f[".---"] = 'J';
    f["-.-"] = 'K';
    f[".-.."] = 'L';
    f["--"] = 'M';
    f["-."] = 'N';
    f["---"] = 'O';
    f[".--."] = 'P';
    f["--.-"] = 'Q';
    f[".-."] = 'R';
    f["..."] = 'S';
    f["-"] = 'T';
    f["..-"] = 'U';
    f["...-"] = 'V';
    f[".--"] = 'W';
    f["-..-"] = 'X';
    f["-.--"] = 'Y';
    f["--.."] = 'Z';
    cin >> n;
    while(n --){
        cin >> s;
        cout << f[s];
    }
    cout << "\n";

    return 0;
}