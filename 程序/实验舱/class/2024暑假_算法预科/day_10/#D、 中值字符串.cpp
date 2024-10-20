#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n;
string s1,s2,ans = "";
int a[__len(6)],b[__len(6)];
bool isbigger[__len(6)];

void dfs(int k){
    if(k == n) return;
    // cout << k << "   " << a[k] << " " << b[k] << "[][]\n";
    if(b[k] < a[k]) a[k] -= 26,b[k] += 26;
    while(b[k] - a[k] >= 2){
        b[k] --;
        a[k] ++;
    }
    // cout << k << "   " << a[k] << " " << b[k] << ";;;;\n";
    if(b[k] == a[k]){
        ans.push_back('a' + a[k]);
    }else{
        if(isbigger[k + 1]){ // left lager
            ans.push_back('a' + a[k]);
            // turn left,and right ass 26
            b[k + 1] += 26;
        }else{
            // turn right,and left min 26
            ans.push_back('a' + b[k]);
            a[k + 1] -= 26;
        }
    }
    return dfs(k + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s1 >> s2;
    if(s1 == s2){
        cout << s1 << "\n";
        return 0;
    }
    if(s1 > s2) swap(s1,s2);
    for(int i = 0;i < n;i ++){
        a[i] = (s1[i] - 'a');
        b[i] = (s2[i] - 'a');
        // cout << a[i] << " " << b[i] << "\n";
    }
    for(int i = n - 1;i >= 0;i --){
        int cur1 = 25 - a[i],cur2 = b[i];
        if(cur1 < cur2) isbigger[i] = 0;
        else if(cur1 > cur2) isbigger[i] = 1;
        else isbigger[i] = isbigger[i + 1];
        // cout << i << " " << isbigger[i] << "[]\n";
    }
    dfs(0);
    cout << ans << "\n";

    return 0;
}