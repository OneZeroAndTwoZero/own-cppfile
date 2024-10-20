#include<bits/stdc++.h>
using namespace std;

int t;
int n;
unordered_map<int,string> tiangan,dizhi;

// 本函数就是用来求那个介于[0,60)间的x的
int __init(int year){
    year -= 2023;
    // 确保模拟次数为非负数
    while(year < 60){
        year += 60;
    }
    // 防止模拟次数太大
    year %= 60;
    return year;
}

void operate(int year){
    // 初始状态(2023)
    int num1 = 9,num2 = 3;
    // 模拟
    while(year){
        num1 = (num1 + 1) % 10;
        num2 = (num2 + 1) % 12;
        year --;
    }
    cout << tiangan[num1] << dizhi[num2] << "\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    // 天干打表
    tiangan[0] = "jia";
    tiangan[1] = "yi";
    tiangan[2] = "bing";
    tiangan[3] = "ding";
    tiangan[4] = "wu";
    tiangan[5] = "ji";
    tiangan[6] = "geng";
    tiangan[7] = "xin";
    tiangan[8] = "ren";
    tiangan[9] = "gui";
    // 地支打表
    dizhi[0] = "zi";
    dizhi[1] = "chou";
    dizhi[2] = "yin";
    dizhi[3] = "mao";
    dizhi[4] = "chen";
    dizhi[5] = "si";
    dizhi[6] = "wu";
    dizhi[7] = "wei";
    dizhi[8] = "shen";
    dizhi[9] = "you";
    dizhi[10] = "xu";
    dizhi[11] = "hai";

    cin >> t;
    while(t --){
        cin >> n;
        n = __init(n);
        operate(n);
    }

	return 0;
}