#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int yi,mi,di;
};

char op;
node t,ans;
int day[15] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int isL(int y){
    if(y % 400 == 0) return 1;
    if((y % 4 == 0) && (y % 100)) return 1;
    return 0;
}

int getdaynum(char op,node x){
    int res = 0;
    if(op == 'K'){ // K
        res = 915 * (x.yi - 1);
        for(int i = 1;i < x.mi;i ++){
            res += (30 + (i & 1));
        }
        res += x.di;
    }else{
        for(int i = 2018;i < x.yi;i ++){
            res += (365 + isL(i));
        }
        day[2] = 28 + isL(x.yi);
        for(int i = 1;i < x.mi;i ++){
            res += day[i];
        }
        res += x.di;
    }
    return res;
}

node getdetailday(char op,int x){
    node res = {0,0,0};
    if(op == 'K'){ // toC
        res.yi = 2018;
        while(x > 365 + isL(res.yi)){
            x -= (365 + isL(res.yi));
            res.yi ++;
        }
        day[2] = 28 + isL(res.yi);
        res.mi = 1;
        while(x > day[res.mi]){
            x -= day[res.mi];
            res.mi ++;
        }
        res.di = x;
    }else{ // toK
        res.yi = ((x - 1) / 915) + 1;
        x %= 915;
        if (x == 0) x = 915;
        res.mi = 1;
        while(x > (30 + (res.mi & 1))){
            x -= (30 + (res.mi & 1));
            res.mi ++;
        }
        res.di = x;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> op >> t.yi >> t.mi >> t.di;
    ans = getdetailday(op,getdaynum(op,t));
    printf("%d %d %d\n",ans.yi,ans.mi,ans.di);

    return 0;
}