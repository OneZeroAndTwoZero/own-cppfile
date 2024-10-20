#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int a,n,m,x,t;
int s[25];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d %d",&a,&n,&m,&x);
    for(int i = 0;i <= 200000;i ++){
        t = a;
        s[1] = a,s[2] = i;
        for(int j = 3;j < n;j ++){
            s[j] = s[j - 1] + s[j - 2];
            t += s[j],t -= s[j - 1]; 
        }
        if(t != m) continue;
        t = a;
        if(x == 1 || x == 2){
            printf("%d\n",a);
        }else{
            for(int j = 3;j <= x;j ++){
                t = t + s[j] - s[j - 1];
            }
            printf("%d\n",t);
        }
        return 0;
    }
    printf("No answer.\n");

    return 0;
}

