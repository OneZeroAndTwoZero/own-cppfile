#include<bits/stdc++.h>
using namespace std;

int n, ans = 0;
string temp, s = "(#";
int p[20000007];

void Manacher(){
    int id = -1, maxpos = -1;
    for (int i = 1; i < n; i ++){
        if (i <= maxpos){
            int pos = (id << 1) - i;
            p[i] = min(p[pos], maxpos - i);
        }
        while (true){
            if(s[i - p[i] - 1] != s[i + p[i] + 1])
                break;
            p[i] ++;
        }
        if (i + p[i] > maxpos){
            id = i, maxpos = i + p[i];
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> temp;
    for (auto && i : temp){
        s.push_back(i);
        s.push_back('#');
    }
    n = s.size();
    Manacher();
    for (int i = 1; i < n; i ++){
        ans = max(ans, p[i]);
    }
    printf("%d\n", ans);

    return 0;
}