#include<bits/stdc++.h>
using namespace std;

// 各个数据类型所占Byte
unordered_map<string,long long> f;
long long ans;
int n;
string s;
// 15种数据类型
string type[15] = {"bool","char","short","int","float",
"long long","double","long double"};

// 本函数把处理第一部分和第二部分合到了一起(从s的第k位开始考虑)
long long operate(int k){
    // 边界条件(由于最后一位是分号,所以前移一位)
    if(k >= s.size() - 1 || s[k] == ' ') return 1;
    // 处理第一部分
    for(int i = 0;i < 8;i ++){
        // 如果开头是一种数据类型,则说明是第一部分
        if(s.find(type[i],k) == k){
            // 判断是数组还是变量
            if(s.find("[") == s.npos)
                // 变量则不用考虑第二部分
                return f[type[i]];
            else{
                // 考虑第二部分,两部分结果相乘
                return f[type[i]] * operate(s.find("["));
            }
        }
    }
    // 如果上面没有返回,则是第二部分
    long long res = 0;
    // 处理出当前维度的大小(在']'之前都是当前维度)
    for(int i = k + 1;s[i] != ']';i ++){
        res = res * 10 + (s[i] - '0');
    }
    // 当前维度是否为最后一维
    if(s.find("[",k + 1) == s.npos)
        // 若是最后一维,则不向后考虑
        return res;
    else
        // 否则向后考虑
        return res * operate(s.find("[",k + 1));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    // 打表
    f["bool"] = f["char"] = 1;
    f["short"] = 2;
    f["int"] = f["float"] = 4;
    f["long long"] = f["double"] = 8;
    f["long double"] = 16;

    cin >> n;
    // 把n后面的换行读掉
    getline(cin,s);
    while(n --){
        getline(cin,s);
        ans += operate(0);
    }
    cout << ans << "\n";

	return 0;
}