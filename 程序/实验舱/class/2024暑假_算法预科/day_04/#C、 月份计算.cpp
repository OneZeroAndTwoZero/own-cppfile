#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int y,m,d;
};

int T;
node a,b;
int len[15];

int isr(int x){
    if(x % 400 == 0) return 1;
    if(x % 100 == 0) return 0;
    if(x % 4 == 0) return 1;
    return 0;
}

int getday(int y,int x){
    if(x != 2) return len[x];
    return 28 + isr(y);
}

bool update(node a,node b){
    if(a.y > b.y) return 1;
    else if(a.y < b.y) return 0;
    if(a.m > b.m) return 1;
    else if(a.m < b.m) return 0;
    if(a.d > b.d) return 1;
    return 0;
}

int solve1(node a,node b){
    int m2 = b.y * 12 + b.m;
    int m1 = a.y * 12 + a.m;
    return m2 - m1 + 1;
}

int solve4(node a,node b){
    int m2 = b.y * 12 + b.m;
    int m1 = a.y * 12 + a.m;
    return m2 - m1;
}

double solve(node a,node b){
    double res = 0.0;
    if(a.y * 12 + a.m == b.y * 12 + b.m){
        return 1.00 * (b.d - a.d + 1) / getday(a.y,a.m);
    }
    res += 1.0 * (getday(a.y,a.m) - a.d + 1) / getday(a.y,a.m);
    res += 1.0 * b.d / getday(b.y,b.m);
    res += (12 * b.y + b.m - 1) - (12 * a.y + a.m + 1) + 1;
    return res;
}
 
void operate(node a,node b){
    // cout << a.d << " " << b.d << "[][]\n";
    if(a.d == 1 && b.d == getday(b.y,b.m)){
        // printf("1;;\n");
        printf("%d\n",solve1(a,b));
    }else if(b.d == a.d - 1 && b.d != getday(b.y,b.m)){ // 一定要判掉不是月末!!!!!因为按顺序
        // printf("4;;\n");
        printf("%d\n",solve4(a,b));
    }else{
        printf("%.5lf\n",solve(a,b));
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

    len[1] = len[3] = len[5] = len[7] = len[8] = len[10] = len[12] = 31;
    len[4] = len[6] = len[9] = len[11] = 30;
    len[2] = 28;
    scanf("%d",&T);
    while(T --){
        scanf("%d.%d.%d %d.%d.%d",&a.y,&a.m,&a.d,&b.y,&b.m,&b.d);
        if(update(a,b)) swap(a,b);
        operate(a,b);
    }

    return 0;
}