#include<bits/stdc++.h>
using namespace std;

string a;
int b;
int t[1000005] = {0};

string chufa(string a,int b){
    string res = "";
    long long yu = 0,f = 0;
    for(int i = 0;i < a.size();i ++){
        yu = yu * 10 + (a[i] - '0');
        if(f || yu / b != 0 || i == a.size() - 1){
            f = 1;
            res.push_back((yu / b) + '0');
            yu %= b;
        }
    }
    if(!yu) return res;
    string xiaos = ".";
    for(int i = 1;;i ++){
        if(yu == 0){
            res = res + xiaos;
            return res;
        }
        if(t[yu] == 0){
            t[yu] = i;
            yu *= 10;
            xiaos.push_back((yu / b) + '0');
            yu %= b;
        }else{
            int p = t[yu];
            string tem = "";
            for(int j = p;j < i;j ++){
                tem.push_back(xiaos[j]);
            }
            for(int j = 0;j < 2;j ++) xiaos.push_back('0');
            xiaos[p] = '(';
            for(int j = p + 1;j <= i;j ++){
                xiaos[j] = tem[j - 1 - p];
            }
            xiaos[i + 1] = ')';
            break;
        }
    }
    res = res + xiaos;
    return res;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    cin >> a >> b;
    cout << chufa(a,b) << endl;

	return 0;
}
