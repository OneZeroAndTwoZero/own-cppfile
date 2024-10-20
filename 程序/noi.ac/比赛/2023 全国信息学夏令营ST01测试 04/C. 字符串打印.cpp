#include<bits/stdc++.h>
using namespace std;

int l,c;
char a[1005];
bool vis[1005] = {0};
int cnt = 0;
string s;
map<char,int> zhao;

bool check(int len){
    int res1 = 0,res2 = 0;
    for(int i = 0;i < len;i ++){
        if(zhao[s[i]]) res1 ++;
        else res2 ++;
    }
    if(res1 < 1 || res2 < 2) return 0;
    return 1;
}

void dfs(int k,int len){
    if(k == c){
        if(len == l && check(len)){
            cout << s << endl;
            cnt ++;
            if(cnt == 25000){
                exit(0);
            }
        }
        return;
    }
    if(len > l){
        return;
    }
    if(len != l){
        s[len] = a[k];
        dfs(k + 1,len + 1);
    }
    dfs(k + 1,len);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    zhao['a'] = 1,zhao['e'] = 1,zhao['i'] = 1,zhao['o'] = 1,zhao['u'] = 1;
    cin >> l >> c;
    for(int i = 0;i < c;i ++){
        cin >> a[i];
    }
    sort(a,a + c);
    for(int i = 0;i < l;i ++){
        s.push_back(' ');
    }
    dfs(0,0);

	return 0;
}
