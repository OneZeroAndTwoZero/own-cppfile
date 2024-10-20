#include<bits/stdc++.h>
using namespace std;

int m,n,q;
char a[100005][25];
char t[25],ma[25];

void cz(int k){
    bool ok = 0;
    for(int i = 0;i < m;i ++){
        if(a[k][i] > ma[i]) ok = 1;
    }
    if(ok){
        for(int i = 0;i < m;i ++){
            ma[i] = a[k][i];
        }
    }
}

int main(){
    scanf("%d %d %d",&m,&n,&q);
    for(int i = 0;i < m;i ++){
        ma[i] = '0';
    }
    for(int i = 0;i < n;i ++){
        scanf("%s",&a[i]);
        cz(i);
    }
    for(int i = 0;i < q;i ++){
        scanf("%s",&t);
        bool ok = 0;
        for(int i = 0;i < m;i ++){
            if(t[i] > ma[i]) ok = 1;
        }
        if(ok){
            printf("%s\n",t);
        }else{
            printf("%s\n",ma);
        }
    }

    return 0;
}