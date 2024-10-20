#include<bits/stdc++.h>
using namespace std;

int n,a[5];
char t[105];
string op,od;
map<string,int> f;

bool check(string &s){
    int res = sscanf(s.c_str(),"%d.%d.%d.%d:%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    // res为成功按格式读取的数字数量,用于检查格式是否正确
    if(res != 5) return 0;
    for(int i = 0;i < 4;i ++) if(a[i] < 0 || a[i] > 255) return 0;
    if(a[4] < 0 || a[4] > 65535) return 0;
    // 将去除前导0的版本写入字符串t,通过比较字符串长度检查是否有前导0
    sprintf(t,"%d.%d.%d.%d:%d",a[0],a[1],a[2],a[3],a[4]);
    return strlen(t) == s.size();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> op >> od;
        if(op == "Server"){
            if(!check(od)) cout << "ERR" << endl;
            else if(f[od] != 0) cout << "FAIL" << endl;
            else{
                cout << "OK" << endl;
                f[od] = i + 1;
            }
        }else{
            if(!check(od)) cout << "ERR" << endl;
            else if(f[od] == 0) cout << "FAIL" << endl;
            else cout << f[od] << endl;
        }
    }

    return 0;
}