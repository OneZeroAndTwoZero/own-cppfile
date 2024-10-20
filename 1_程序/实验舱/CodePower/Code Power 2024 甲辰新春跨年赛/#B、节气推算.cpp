#include<bits/stdc++.h>
using namespace std;

int y;
int num[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int check(int x){
    if(x % 400 == 0) return 1;
    if(x % 100 == 0) return 0;
    return x % 4 == 0;
}

void operate(int k){
    int cur;
    for(int i = 1900;;i ++){
        if(365 + check(i) < k){
            k -= 365 + check(i);
        }else{
            printf("%d-",i);
            cur = i;
            break;
        }
    }
    for(int i = 1;i <= 12;i ++){
        if(num[i] + (i == 2 && check(cur)) < k){
            k -= num[i] + (i == 2 && check(cur));
        }else{
            printf("%02d-",i);
            break;
        }
    }
    printf("%02d\n",k);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&y);
    for(int i = 0;i < 24;i ++){
        double cur = 365.242 * (y - 1900) + 6.2 + 15.22 * i - 1.9 * sin(0.262 * i);
        // printf("%lf\n",cur);
        operate((int)cur);
    }

    return 0;
}